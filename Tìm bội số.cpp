
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
int n = 19, a[5005], final = 0;
void ktao() {
	a[n] = 8;
}
void sinh() {
	int i = n;
	while (i >= 1 && a[i] == 8) {
		a[i] = 0;
		i--;
	}
	if (i == 0)final = 1;
	else {
		a[i] = 8;
	}
}
int main()
{
	vector<long long> v;
	ktao();
	while (final == 0) {
		long long num = 0;
		for (int i = 1; i <= n; i++) {
			num = num * 10 + a[i];
		}
		v.push_back(num);
		sinh();
	}
	int t;
	cin >> t;
	while (t--) {
		int x; cin >> x;
		for (auto y : v) {
			if (y % x == 0) {
				cout << y << endl;
				break;
			}
		}
	}
}

