
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
int n, k, a[5000], final = 0;
void ktao() {
	for (int i = 1; i <= k; i++) {
		a[i] = i;
	}
}
void sinh() {
	int i = k;
	while (i >= 1 && a[i] == n - k + i) {
		i--;
	}
	if (i == 0) {
		final = 1;
	}
	else {
		a[i]++;
		for (int j = i + 1; j <= k; j++) {
			a[j] = a[j - 1] + 1;
		}
	}
}
int main()
{
	cin >> n >> k;
	ktao();
	while (final == 0) {
		for (int i = 1; i <= k; i++) {
			cout << a[i];
		}
		cout << endl;
		sinh();
	}
}

