// Author: Perry (https://perrythedev.com)
// Problem Link: https://marisaoj.com/problem/544
#include <bits/stdc++.h>
using namespace std;

#define NAME "NAME"
#define ln "\n"
#define sz size()

typedef long long ll;
typedef long double ld;

void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void docfile() {
    if (ifstream(NAME ".INP")) {
        freopen(NAME ".INP", "r", stdin);
        freopen(NAME ".OUT", "w", stdout);
    }
}

void time() {
    cerr << ln << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s." 
         << ln;
}

void solve(string s, int n) {
    if(s.sz >= 2 && s[s.sz - 1] == s[s.sz - 2]) {
        return;
    }
    if(s.sz == n) {
        cout << s << ln;
        return;
    }
    solve(s + 'A', n);
    solve(s + 'B', n);
    solve(s + 'C', n);
}

int main() {
    fastio();
    docfile();

    int n; cin >> n;
    solve("", n);

    time();
    return 0;
}