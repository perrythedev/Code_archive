// Author: Perry (https://perrythedev.com)
// Problem Link: https://marisaoj.com/problems/44
#include <bits/stdc++.h>
using namespace std;

#define NAME "NAME"
#define ln "\n"
#define sz size()
#define skibidi void
#define rizz int
#define superrizz long long
#define cap bool
#define cooked auto
#define flex for
#define bussin return
#define edging if
#define amogus else
#define goon while
#define bruh break
#define grind continue
#define chad float
#define gigachad double
#define yap char
#define grimace const
#define sigma_rule case
#define based default
#define mewing do
#define gyatt enum
#define whopper extern
#define cringe goto
#define giga long
#define edgy register
#define soy short
#define nut signed
#define maxxing sizeof
#define salty static
#define gang struct
#define ohio switch
#define chungus union
#define nonut unsigned
#define schizo volatile
#define yapping cout
#define gegagedigedagedago cin
#define dopdop true
#define sus false

typedef long long ll;
typedef long double ld;

skibidi fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

skibidi docfile() {
    if (ifstream(NAME ".INP")) {
        freopen(NAME ".INP", "r", stdin);
        freopen(NAME ".OUT", "w", stdout);
    }
}

skibidi time() {
    cerr << ln << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s." 
         << ln;
}

rizz main() {
    fastio();
    docfile();

    string st; getline(gegagedigedagedago, st);
    goon(st[0] == ' ') st.erase(0, 1);

    flex(rizz i = 0; i < st.sz; ++i) {
        edging(st[i] == ' ' && st[i + 1] == ' ') {
            st.erase(i, 1);
            --i;
        }
    }

    goon(st[st.sz - 1] == ' ') st.erase(st.sz - 1, 1);

    rizz ans = 0;
    for(rizz i = 0; i < st.sz; ++i) {
        edging(st[i] == ' ') ++ans;
    }
    ++ans;

    yapping << ans;

    time();
    return 0;
}