
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
int n, a[5000], final = 0;
void ktao() {
	for (int i = 1; i <= n; i++) {
		a[i] = i;
	}
}
void sinh() {
	int i = n - 1;
	while (i >= 1 && a[i] > a[i + 1]) {
		i--;
	}
	if (i == 0) {
		final = 1;
	}
	else {
		int j = n;
		while (a[i] > a[j]) {
			j--;
		}
		swap(a[i], a[j]);
		reverse(a + i + 1, a + n + 1);
	}
}
int main()
{
	vector<vector<int>> v;
	cin >> n;
	ktao();
	while (final == 0) {
		vector<int>tmp;
		for (int i = 1; i <= n; i++) {
			tmp.push_back(a[i]);
		}
		v.push_back(tmp);
		sinh();
	}
	for (int i = v.size() - 1; i >= 0; i--) {
		for (int j = 0; j < v[i].size(); j++) {
			cout << v[i][j];
		}
		cout << endl;
	}
}

