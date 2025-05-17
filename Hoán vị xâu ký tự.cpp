
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
#include <unordered_set>
using namespace std;
string s;
int final = 0;
void ktao() {
	sort(s.begin(), s.end());
}
void sinh() {
	int i = s.size() - 2;
	while (i >= 0 && s[i] > s[i + 1]) {
		i--;
	}
	if (i < 0) final = 1;
	else {
		int j = s.size() - 1;
		while (s[i] > s[j]) {
			j--;
		}
		swap(s[i], s[j]);
		reverse(s.begin() + i + 1, s.end());
	}
}
int main()
{
	cin >> s;
	unordered_set<char>se;
	for (auto x : s) {
		se.insert(x);
	}
	string res = "";
	for (auto x : se) {
		res += x;
	}
	s = res;
	ktao();
	vector<vector<char>> v;
	while (final == 0) {
		vector<char>tmp;
		for (int i = 0; i < s.size(); i++) {
			tmp.push_back(s[i]);
		}
		v.push_back(tmp);
		sinh();
	}
	sort(v.begin(), v.end());
	for (auto x : v) {
		for (auto y : x) {
			cout << y;
		}
		cout << endl;
	}
}

