#include <iostream>
#include <fstream>

#define NAME "NAME"

typedef long long ll;
typedef long double ld;

void docfile() {
    if(std::ifstream(NAME".inp")) {
        std::freopen(NAME".inp", "r", stdin);
        std::freopen(NAME".out", "w", stdout);
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL); std::cout.tie(NULL);
    docfile();

    ll a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::cout << std::min(a, std::min(b, std::min(c, d)));

    return 0;
}