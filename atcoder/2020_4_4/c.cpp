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

    ll n, k;
    cin >> n >> k;

    if (n == k) {
        cout << 0 << endl;
    } else if (n > k) {
        n = n % k;
        cout << min(n, k - n) << endl;
    } else {
        cout << min(n, k - n) << endl;
    }

    return 0;
}