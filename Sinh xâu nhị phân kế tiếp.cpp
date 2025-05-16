
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

int main()
{
	string s;
	cin >> s;
	int i = s.size() - 1;
	while (i >= 1 && s[i] == '1') {
		s[i] = '0';
		i--;
	}
	if (i == 0) {
		s[i] = '0';
	}
	else s[i] = '1';
	cout << s;
}

