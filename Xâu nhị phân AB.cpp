
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
int n; char a[50000]; int final = 0;
void khoitao() {
	for (int i = 1; i <= n; i++) {
		a[i] = 'B';
	}
}
void sinh() {
	int i = n;
	while (i >= 1 && a[i] == 'A') {
		a[i] = 'B';
		i--;
	}
	if (i == 0) {
		final = 1;
	}
	else a[i] = 'A';
}
int main()
{
	cin >> n;
	khoitao();
	while (final == 0) {
		for (int i = 1; i <= n; i++) {
			cout << a[i];
		}
		cout << endl;
		sinh();
	}
}

