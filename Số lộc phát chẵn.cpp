
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
string a[5005];  int final = 0;
void ktao(int k) {
	for (int i = 1; i <= k; i++) {
		a[i] = "6";
	}
	final = 0;
}
void sinh(int k) {
	int i = k;
	while (i >= 1 && a[i] == "8") {
		a[i] = "6";
		i--;
	}
	if (i == 0) final = 1;
	else {
		a[i] = "8";
	}
}
bool check(string n) {
	for (int i = 0; i < n.size() / 2; i++) {
		if (n[i] != n[n.size() - i - 1]) {
			return false;
		}
	}
	return true;
}
int main()
{
	cin >> n;
	vector<string> v;
	for (int k = 2; k <= n; k+= 2) {
		ktao(k);
		while (final == 0) {
			string s = "";
			for (int i = 1; i <= k; i++) {
				s += a[i];
			}
			if (check(s)) {
				v.push_back(s);
				if (v.size() == n) {
					for (auto x : v) {
						cout << x << " ";
					}
					return 0;
				}
			}
			sinh(k);
		}
	}
}

