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

    int p, q, r;
    cin >> p >> q >> r;

    int ans = p + q;
    ans = min(ans, p + r);
    ans = min(ans, q + r);

    cout << ans << "\n";
    return 0;
}