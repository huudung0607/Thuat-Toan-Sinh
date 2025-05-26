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
int c[5005];
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
	for (int i = 1; i <= n; i++) {
		cin >> c[i];
	}
	sort(c + 1, c + n + 1);
	set<long long> se;
	for (k = 1; k <= n; k++) {
		ktao();
		while (final == 0) {
			long long tmp = 0;
			for (int i = 1; i <= k; i++) {
				tmp += c[a[i]];
			}
			se.insert(tmp);
			sinh();
		}
	}
	for (auto x : se) {
		cout << x << " ";
	}
}
