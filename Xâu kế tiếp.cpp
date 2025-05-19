
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

int main()
{
	string s;
	cin >> s;
	int i = s.size() - 2;
	while (i >= 0 && s[i] >= s[i + 1]) {
		i--;
	}
	if (i < 0) {
		cout << "NOT EXIST" << endl;
		return 0;
	}
	else {
		int j = s.size() - 1;
		while (s[i] >= s[j]) {
			j--;
		}
		swap(s[i], s[j]);
		reverse(s.begin() + i + 1, s.end());
	}
	cout << s << endl;
}
