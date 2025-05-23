
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;
int n, a[1000], final = 0;
void khoitao() {
	for (int i = 1; i <= n; i++) {
		a[i] = i;
	}
}
void sinh() {
	int i = n - 1;
	while (i >= 1 && a[i] > a[i + 1]) {
		i--;
	}
	if (i == 0) {
		final = 1;
	}
	else {
		int j = n;
		while (a[i] > a[j]) {
			j--;
		}
		swap(a[i], a[j]);
		reverse(a + i + 1, a + n + 1);
	}
}

bool check(vector<int> v) {
	for (int i = 1; i < v.size() - 1; i++) {
		if (abs(v[i] - v[i - 1]) == 1 || abs(v[i] - v[i + 1]) == 1) {
			return false;
		}
	}
	return true;
}
int main()
{
	cin >> n;
	khoitao();
	vector<vector<int>> v;
	while (final == 0) {
		vector<int> tmp;
		for (int i = 1; i <= n; i++) {
			tmp.push_back(a[i]);
		}
		if (check(tmp)) {
			v.push_back(tmp);
		}
		sinh();
	}
	for (auto x : v) {
		for (auto y : x) {
			cout << y;
		}
		cout << endl;
	}
}
