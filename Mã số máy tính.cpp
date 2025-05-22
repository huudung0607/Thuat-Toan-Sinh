
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
char a[7] = { 'A','B','C','D','E','F' };
int n;
string s = "";
int num[5005];
string cs[5005];

int finaltext = 0;
int finalnum = 0;
void ktao() {
	sort(s.begin(), s.end());
}
void sinh() {
	int i = s.size() - 2;
	while (i >= 0 && s[i] > s[i + 1]) {
		i--;
	}
	if (i < 0) finaltext = 1;
	else {
		int j = s.size() - 1;
		while (s[i] > s[j]) {
			j--;
		}
		swap(s[i], s[j]);
		reverse(s.begin() + i + 1, s.end());
	}
}

void ktaonum() {
	for (int i = 1; i <= n; i++) {
		num[i] = 1;
	}
}
void sinhso() {
	int i = n;
	while (i >= 1 && num[i] == n) {
		i--;
	}
	if (i == 0) finalnum = 1;
	else {
		num[i]++;
		for (int j = i + 1; j <= n; j++) {
			num[j] = 1;
		}
	}
}
vector<string> text;
vector<string> number;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		s += a[i];
	}
	ktao();
	while (finaltext == 0) {
		text.push_back(s);
		sinh();
	}
	ktaonum();
	while (finalnum == 0) {
		string tmp = "";
		for (int i = 1; i <= n; i++) {
			tmp += to_string(num[i]);
		}
		number.push_back(tmp);
		sinhso();
	}
	int i = 0, j = 0;
	string ans = "";
	set<string>se;
	while (i < text.size() && j < number.size()) {
		ans = text[i] + number[j];
		if (j < number.size() - 1) {
			j++;
		}
		else {
			j = 0;
			i++;
		}
		se.insert(ans);
	}
	for (auto x : se) {
		cout << x << endl;
	}
}

