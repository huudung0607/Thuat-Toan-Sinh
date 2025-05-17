
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
int n, a[3000], final = 0;
void nhap() {
	for (int i = 1; i <= n; i++) {
		a[i] = 6;
	}
}
void sinh() {
	int i = n;
	while (i >= 1 && a[i] == 8) {
		a[i] = 6;
		i--;
	}
	if (i == 0) {
		final = 1; 
	}
	else a[i] = 8;
}
bool check(vector<int> v) {
	int cnt6 = 0, cnt8 = 0;
	for (int i = 0; i < v.size() - 1; i++) {
		if (v[i] == 8 && v[i + 1] == 8) {
			return false;
		}
	}
	for (int r = 0; r < v.size(); r++) {
		if (v[r] == 6) {
			cnt6++;
			if (cnt6 > 3) {
				return false;
			}
		}
		else cnt6 = 0;
		
	}
	return true;
}

int main()
{
	cin >> n;
	nhap();
	vector<vector<int>> v;
	while (final == 0) {
		if (a[1] == 8 && a[n] == 6) {
			vector<int> tmp;
			for (int i = 1; i <= n; i++) {
				tmp.push_back(a[i]);
			}
			v.push_back(tmp);
		}
		sinh();
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		if (check(v[i])) {
			for (int j = 0; j < v[i].size(); j++) {
				cout << v[i][j];
			}
			cout << endl;
		}
	}
}
