
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
bool check(vector<string> v) {
	for (int i = 0; i < v.size()/2; i++) {
		if (v[i] != v[v.size() - i - 1]) {
			return false;
		}
	}
	return true;
}
int main() {
	cin >> n;
	ktao();
	vector<vector<string>> v;
	while (final == 0) {
		vector<string> tmp;
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
			cout << endl;
		}
	
	}
}

