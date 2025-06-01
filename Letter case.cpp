
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
string s;
vector<string> v;
string tmp = "";
void Try(int i) {
	if (tmp.size() == s.size()) {
		v.push_back(tmp);
		return;
	}
	if (isalpha(s[i])) {
		s[i] = toupper(s[i]);
		tmp.push_back(s[i]);
		Try(i + 1);
		tmp.pop_back();

		s[i] = tolower(s[i]);
		tmp.push_back(s[i]);
		Try(i + 1);
		tmp.pop_back();
	}
	else {
		tmp.push_back(s[i]);
		Try(i + 1);
		tmp.pop_back();
	}
}
int main()
{
	cin >> s;
	Try(0);
	sort(v.begin(), v.end());
	for (auto x : v) {
		cout << x << endl;
	}
}

