#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << n << endl;
    return 0;
}


// N×Nの隣接行列を作れないときは、
//   vector <int> vec[100005];
// などでNodeごとのvectorを作れば計算が間に合う。
void dfs(int v) {
    visited[v] = true;
    for (int i = 0; i < n; i++) {
        if (graph[v][i] == true && visited[i] == false) {
            dfs(i);
        }
    }
}


// gcd lcm
ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
    ll g = gcd(a, b);
    return a / g * b;
}


// Combination (n fixed)
ll M = 1000000007;
ll inv[100005], fac[100005], fiv[100005];
ll combination(ll k) {
    return fac[n] * fiv[k] % M * fiv[n-k] % M;
}
int main2() {
    inv[1]=fac[1]=fiv[1]=inv[0]=fac[0]=fiv[0]=1;
    for (ll i = 2; i <= n; i++) {
        fac[i] = fac[i-1] * i % M; // n!
        inv[i] = inv[M%i] * (M-M/i) % M; // n^-1
        fiv[i] = fiv[i-1] * inv[i] % M; // (n!)^-1
    }
    ll nCk = combination(k);
}

vector < pair<int,int> > vec;
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) {
    return (a.second < b.second);
}
int main3() {
    for (int i = 0; i < n; i++) {
        vec.push_back(make_pair(i, i+1));
    }
    // sort by first element asc
    sort(vec.begin(), vec.end());
    // sort desc ?
    sort(vec.begin(), vec.end(), greater<int>());
    // sort by second element asc by user defined function
    sort(vect.begin(), vect.end(), sortbysec);
}