#include <functional>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <vector>
#include <random>
#include <bitset>
#include <queue>
#include <cmath>
#include <stack>
#include <set>
#include <map>
typedef long long ll;
using namespace std;
const ll MOD = 1000000007LL;

int main() {
    cin.sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int k, n;
    cin >> k >> n;

    vector <int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int mx = a[0] + (k - a[n - 1]);
    for (int i = 0; i < n - 1; i++) {
        mx = max(mx, a[i + 1] - a[i]);
    }

    cout << k - mx << "\n";
    return 0;
}