
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
int n;
string a[5005]; int final = 0;
void ktao() {
	for (int i = 1; i <= n; i++) {
		a[i] = "0";
	}
	final = 0;
}
void sinh() {
	int i = n;
	while (i >= 1 && a[i] == "1") {
		a[i] = "0";
		i--;
	}
	if (i == 0) final = 1;
	else {
		a[i] = "1";
	}
}
int main() {
	int k; cin >> k;
	vector<vector<string>> v;
	for (n = 1; n <= k / 2; n++) {
		ktao();
		while (final == 0) {
			vector<string> tmp;
			string s = "";
			for (int i = 1; i <= k; i++) {
				s += a[i];
			}
			string rev = s;
			reverse(rev.begin(), rev.end());
			tmp.push_back(s + rev);
			v.push_back(tmp);
			sinh();
		}
	}
	sort(v.begin(), v.end());
	for (auto x : v) {
		for (auto y : x) {
			cout << y;
		}
		cout << endl;
	}
}

