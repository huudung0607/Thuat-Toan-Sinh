// 2 bien đóng và mở
// nếu đóng < n/2 thì thêm ( và tăng đóng, ngược lại thêm ) tăng mở
// check xem ( và ) có bằng nhau không bằng cnt, nếu cnt < 0 thì false, == 0 nghĩa là ( == ) thì true
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
int n;
char a[1000]; int final = 0;
char text[15] = { '(',')','(',')','(',')','(',')','(',')','(',')','(',')' };
void khoitao() {
	int l = 0, r = 0;
	for (int i = 0; i < n; i++){
		if (l < n / 2) {
			a[i] = '(';
			l++;
		}
		else {
			a[i] = ')';
			r++;
		}
	}
}
void sinh() {
	int i = n - 2;
	while (i >= 0 && a[i] >= a[i + 1]) {
		i--;
	}
	if (i < 0) {
		final = 1;
	}
	else {
		int j = n - 1;
		while (a[i] >= a[j]) {
			j--;
		}
		swap(a[i], a[j]);
		reverse(a + i + 1, a + n);
	}
}
bool check() {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == '(') cnt++;
		else cnt--;
		if (cnt < 0) return false;
	}
	return cnt == 0;
}
int main()
{
	cin >> n;
	bool found = false;
	khoitao();
	while (final == 0) {
		if (check()) {
			found = true;
			for (int i = 0; i < n; i++) {
				cout << a[i];
			}
			cout << endl;
		}
		sinh();
	}
	if (!found) {
		cout << "NOT FOUND";
	}
}
