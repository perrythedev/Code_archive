#include <bits/stdc++.h>
using namespace std;

#define NAME "coprimeincseq"
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

int main() {
    fastio();
    docfile();

    int tests; cin >> tests;
    while(tests--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int &i : a) cin >> i;

        
    }

    time();
    return 0;
}