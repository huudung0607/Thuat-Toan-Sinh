
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
void nhap() {
	for (int i = 1; i <= n; i++) {
		a[i] = 0;
	}
}
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
	cin >> n;
	nhap();
	while (final == 0) {
		for (int i = 1; i <= n; i++) {
			cout << a[i];
		}
		cout << endl;
		sinh();
	}
}

