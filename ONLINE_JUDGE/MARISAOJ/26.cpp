// Author: Perry (https://perrythedev.com)
// Problem Link: https://marisaoj.com/problem/26
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

bool isPalinVector(vector<int> a) {
    for (int i = 0; i < a.size() / 2; i++) {
        if (a[i] != a[a.size() - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    fastio();
    docfile();

    int n; cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    cout << (isPalinVector(a) ? "YES" : "NO");

    time();
    return 0;
}