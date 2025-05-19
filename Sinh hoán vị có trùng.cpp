
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
set<string> se;
void ktao() {
	sort(s.begin(), s.end());
}
void sinh() {
	int i = s.size() - 2;
	while (i >= 0 && s[i] >= s[i + 1]) {
		i--;
	}
	if (i < 0) final = 1;
	else {
		int j = s.size() - 1;
		while (s[i] >= s[j]) {
			j--;
		}
		swap(s[i], s[j]);
		reverse(s.begin() + i + 1, s.end());
	}
}
int main()
{
	cin >> s;
	ktao();
	while (final == 0) {
		cout << s << endl;
		sinh();
	}
}
