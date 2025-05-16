
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
int a[5000];
int main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= k; i++) {
		cin >> a[i];
	}
	int i = k;
	while (i >= 1 && a[i] == n - k + i) {
		i--;
	}
	if (i == 0) {
		for (int j = 1; j <= k; j++) {
			cout << j << " ";
		}
	}
	else
	{
		a[i]++;
		for (int j = i + 1; j <= k; j++) {
			a[j] = a[j - 1] + 1;
		}
		for (int i = 1; i <= k; i++) {
			cout << a[i] << " ";
		}
	}
	
}

