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

    int a, b, t;
    cin >> a >> b >> t;

    int ans = 0;
    for (int i = 1; a * i <= t; i++) {
        ans += b;
    }

    cout << ans << "\n";
    return 0;
}