
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

int main()
{
	int a[4];
	for (auto& x : a) cin >> x;
	int sum = a[0];
	for (int i = 1; i < 4; i++) {
		if (a[i] > 0) sum += a[i];
		else sum -= a[i];
	}
	cout << sum;
}

