
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
string a[5000];
int n, final = 0;
void khoitao() {
	sort(a + 1, a + n + 1);
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
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	khoitao();
	while (final == 0) {
		for (int i = 1; i <= n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
		sinh();
	}
}

