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

    int n;
    cin >> n;

    int cur = 0;
    int ans = 0;
    vector <int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
        if (i && h[i] <= h[i-1]) {
            cur++;
        } else {
            ans = max(ans, cur);
            cur = 0;
        }
    }

    ans = max(ans, cur);
    cout << ans << "\n";
    return 0;
}