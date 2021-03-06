#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <vector>
#include <random>
#include <queue>
#include <cmath>
#include <stack>
#include <set>
#include <map>
typedef long long ll;
using namespace std;

int main() {
    cin.sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == 'A' && s[i-1] == 'W') {
            s[i] = 'C';
            s[i-1] = 'A';
        }
    }

    cout << s << "\n";
    return 0;
}