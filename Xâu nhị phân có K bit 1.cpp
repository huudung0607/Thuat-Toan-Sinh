#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, k;
int final = 0;
int a[5005];
void ktao() {
	for (int i = 1; i <= n; i++) {
		a[i] = 0;
	}
}
void sinh() {
	int i = n;
	while (i >= 1 && a[i] == 1) {
		a[i] = 0;
		i--;
	}
	if (i == 0) final = 1;
	else a[i] = 1;
}
bool check(vector<int> v) {
	int cnt = 0;
	for (auto x : v) {
		if (x == 1)cnt++;
	}
	return cnt == k;
}
bool check2(vector<int> v) {
	int lt = 0, cnt = 0;
	for (auto x : v) {
		if (x == 1) lt++;
		else lt = 0;
		if (lt >= k) cnt++;
	}
	return cnt == 1;
}

int main() {
	cin >> n >> k;
	ktao();
	vector<vector<int>> v;
	while (final == 0) {
		vector<int>tmp;
		for (int i = 1; i <= n; i++) {
			tmp.push_back(a[i]);
		}
		v.push_back(tmp);
		sinh();
	}
	sort(v.begin(), v.end());
	for (auto x : v) {
		if (check(x)) {
			for (auto y : x) {
				cout << y;
			}
			cout << " ";
		}
	}
	cout << endl;
	for (auto x : v) {
		if (check2(x)) {
			for (auto y : x) {
				cout << y;
			}
			cout << " ";
		}
	}
}
