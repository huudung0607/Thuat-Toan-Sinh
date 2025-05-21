
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
	int n; cin >> n;
	set<int> se; vector<int> a;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x; se.insert(x);
	}
	for (auto x : se) {
		a.push_back(x);
	}
	sort(a.begin(), a.end(), greater<int>());
	do
	{
		for (auto x : a) {
			cout << x << " ";
		}
		cout << endl;
	} while (prev_permutation(a.begin(),a.end()));
}

