
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
	int n;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	vector<int>a(n);
	int cnt = 0;
	int index = 0;
	for (int i = 0; i < n; i++) a[i] = i + 1;
	do {
		index++;
		if (a == v) {
			cout << index; break;
		}	
	} while (next_permutation(a.begin(), a.end()));
}


