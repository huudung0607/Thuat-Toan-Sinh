
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
string s; char c;
string a[5005];

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
bool nguyenam(char c) {
	return c == 'A' || c == 'E';
}
bool check(string s) {
	for (int i = 1; i < s.size() - 1; i++) {
		if (nguyenam(s[i]) && !nguyenam(s[i - 1]) && !nguyenam(s[i + 1])) {
			return false;
		}
	}
	return true;
}
int main()
{
	cin >> c;
	for (char i = 'A'; i <= c; i++) {
		s += i;
	}
	ktao();
	vector<string> v;
	while (final == 0) {
		if (check(s)) {
			v.push_back(s);
		}
		sinh();
	}
	sort(v.begin(), v.end());
	for (auto x : v) {
		cout << x << endl;
	}
}

