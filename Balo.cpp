
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
int n, a[3000], final = 0;
int sum = 0, weight[3000], value[3000];

void sinh() {
	int i = n;
	while (i >= 1 && a[i] == 1) {
		a[i] = 0;
		i--;
	}
	if (i == 0) {
		final = 1; //xet xong cau hinh cuoi cung
	}
	else a[i] = 1;
}
int main()
{
	cin >> n >> sum;
	for (int i = 1; i <= n; i++) {
		cin >> weight[i];
	}
	for (int i = 1; i <= n; i++) {
		cin >> value[i];
	}
	int maxval = -1;
	while (final == 0) {
		int sumw = 0, sumv = 0;
		for (int i = 1; i <= n; i++) {
			if (a[i] == 1) {
				sumw += weight[i];
				sumv += value[i];
			}
		}
		if (sumw <= sum) {
			maxval = max(maxval, sumv);
		}
		sinh();
	}
	cout << maxval;
}
