#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

// 1
// 6 1
// CABABC

void solve() {
    string s;
    ll score = 0, len;
    ll tscore;
    ll op = 0;
    cin >> len >> tscore >>  s;
    for(ll k = 0; k < len/2; ++k) {
        if(s[k] != s[len-1-k]) {
            score++;
        }
    }   
    if(tscore == score) {
        cout << 0 << '\n';
        return;
    }
    cout << abs(tscore - score) << '\n';
}   

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc; cin >> tc;
    for (int t = 1; t <= tc; t++) {
        cout << "Case #" << t  << ": ";
        solve();
    }
}