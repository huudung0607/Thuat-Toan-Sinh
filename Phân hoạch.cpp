
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
int n, a[5000], final = 0, cnt = 0;
int dem = 0;
void ktao() {
	cnt = 1;
	a[1] = n;
}
void sinh() {
	dem++;
	int i = cnt;
	while (i >= 1 && a[i] == 1) {
		i--;
	}
	if (i == 0) {
		final = 1;
	}
	else {
		int d = cnt - i + 1;//luong don vi con thieu
		a[i]--;
		cnt = i;
		int q = d / a[i], r = d % a[i];
		for (int j = 1; j <= q; j++) {
			cnt++;
			a[cnt] = a[i];
		}
		if (r) {
			cnt++;
			a[cnt] = r;
		}
	}
}
int main()
{
	cin >> n;
	ktao();
	vector<vector<int>> v;
	while (final == 0) {
		vector<int> tmp;
		for (int i = 1; i <= cnt; i++) {
			tmp.push_back(a[i]);
		}
		v.push_back(tmp);
		sinh();	
	}
	cout << v.size() << endl;
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].size(); j++) {
			cout << v[i][j];
			if (j < v[i].size() - 1) {
				cout << "+";
			}
		}
		cout << endl;
	}
}

