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

    ll m;
    cin >> m;

    ll cur = 1LL << 60;
    for (int i = 0; i < 68; i++) {
        cur %= m;
        cur <<= 1;
    }

    cout << cur % m << "\n";
    return 0;
}