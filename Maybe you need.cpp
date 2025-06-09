
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
vector<int> tmp;
vector<vector<int>> v;
string s = "";
void Try(int i) {
	if (i > 0) cout << s << endl;
	if (i == n)return;
	for (int j = 1; j <= n; j++) {
		s += to_string(j);
		Try(i + 1);
		s.pop_back();
	}
}
int main()
{
	cin >> n;
	Try(0);

}

