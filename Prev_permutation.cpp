
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
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		a[i] = n - i;
	}
	do {
		for (int i = 0; i < n; i++) {
			cout << a[i];
		}
		cout << endl;
	}while(prev_permutation(a,a + n));
}

