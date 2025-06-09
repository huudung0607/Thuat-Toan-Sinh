
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
int n, k, a[5005], final = 0;
char c, ch[5005];int finalc = 0;
string s;
void ktao() {
	for (int i = 1; i <= k; i++) {
		a[i] = i;
	}
}
void sinh() {
	int i = k;
	while (i >= 1 && a[i] == n - k + i) {
		i--;
	}
	if (i == 0) final = 1;
	else {
		a[i]++;
		for (int j = i + 1; j <= k; j++) {
			a[j] = a[j - 1] + 1;
		}
	}
}
void ktaoc() {
	sort(s.begin(), s.end());
}
void sinhc() {
	int i = s.size() - 2;
	while (i >= 0 && s[i] > s[i + 1]) {
		i--;
	}
	if (i < 0) finalc = 1;
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
	cin >> n >> k >>  c;
	for (char i = 'a'; i <= c; i++) {
		s += i;
	}
	ktao();
	ktaoc();
	vector<string> num;
	while (final == 0) {
		string tmp = "";
		for (int i = 1; i <= k; i++) {
			tmp += to_string(a[i]);
		}
		num.push_back(tmp); sinh();
	}
	vector<string> text;
	while (finalc == 0) {
		text.push_back(s);
		sinhc();
	}
	vector<string> res;
	int i = 0, j = 0;
	while (i < text.size() && j < num.size()) {
		string tmp = "";
		tmp = text[i] + num[j];
		if (j < num.size() - 1) {
			j++;
		}
		else {
			j = 0;
			i++;
		}
		res.push_back(tmp);
	}
	for (auto x : res) {
		cout << x << endl;
	}
}

