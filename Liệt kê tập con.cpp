
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
int n, a[5000], final = 0, k;
void ktao() {
	for (int i = 1; i <= k; i++) {
		a[i] = i;
	}
	final = 0;
}
void sinh() {
	int i = k;
	while (i >= 1 && a[i] == n - k + i) {
		i--;
	}
	if (i == 0) {
		final = 1;
	}
	else
	{
		a[i]++;
		for (int j = i + 1; j <= k; j++) {
			a[j] = a[j - 1] + 1;
		}
	}
}
int main()
{
	cin >> n;
	vector<vector<int>> v;
	for (k = 1; k <= n; k++) {
		ktao();
		while (final == 0) {
			vector<int> tmp;
			for (int i = 1; i <= k; i++) {
				tmp.push_back(a[i]);
			}
			v.push_back(tmp);
			sinh();
		}
	}
	sort(v.begin(), v.end());
	for (auto x : v) {
		for (auto y : x) {
			cout << y << " ";
		}
		cout << endl;
	}
}

