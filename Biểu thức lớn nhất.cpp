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

int main() {
    vector<int> a(4);
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    int maxVal = INT_MIN;
    for (int i = 0; i < 8; i++) {
        int sum = a[0];
        for (int j = 0; j < 3; j++) {
            if ((i >> j) & 1) {
                sum += a[j + 1];
            }
            else {
                sum -= a[j + 1];
            }
        }
        maxVal = max(maxVal, sum);
    }
    cout << maxVal;
}
