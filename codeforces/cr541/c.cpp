#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <vector>
#include <queue>
#include <cmath>
#include <stack>
#include <set>
#include <map>
typedef long long ll;
typedef unsigned int uint;
using namespace std;

int main() {
    cin.sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a+n);

    int i;
    for (i = 0; i < n; i += 2) {
        cout << a[i] << " ";
    }

    if (i == n) {
        i--;
    } else {
        i -= 3;
    }

    for (; i >= 0; i -= 2) {
        cout << a[i] << " ";
    }

    return 0;
}