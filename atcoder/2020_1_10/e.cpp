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

class Combination {
public:
    vector <ll> fac, inv, fiv;

    Combination(int N) : fac(N + 1), inv(N + 1), fiv(N + 1) {
        fac[0] = inv[0] = fiv[0] = fac[1] = inv[1] = fiv[1] = 1;
        for (ll i = 2; i <= N; i++) {
            fac[i] = fac[i - 1] * i % MOD; // n!
            inv[i] = inv[MOD % i] * (MOD - MOD / i) % MOD; // n^-1
            fiv[i] = fiv[i - 1] * inv[i] % MOD; // (n!)^-1
        }
    }

    ll C(ll n, ll k) {
        if (k < 0 || n < k) return 0;
        return fac[n] * fiv[k] % MOD * fiv[n - k] % MOD;
    }

    ll P(ll n, ll k) {
        if (k < 0 || n < k) return 0;
        return fac[n] * fiv[n - k] % MOD;
    }

    ll H(ll n, ll k) {
        if (n == 0 && k == 0) return 1;
        return C(n + k - 1, k - 1);
    }
};

int main() {
    cin.sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector <ll> c(n);
    for (int i = 0; i < n; i++) cin >> c[i];

    sort(c.begin(), c.end());

    Combination com(200005);

    vector <ll> two(n * 2, 1);
    for (int i = 1; i < 2 * n; i++) {
        two[i] = two[i - 1] * 2 % MOD;
    }

    ll tmp = 1;
    ll ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        ll hoge = c[i] * 2 % MOD * two[n + i - 1] % MOD;
        ans = (ans + hoge * tmp % MOD) % MOD;
        tmp = (2 * tmp + two[n - i - 1]) % MOD;
    }

    cout << ans << "\n";
    return 0;
}