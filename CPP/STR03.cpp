#include <iostream>
#include <fstream>
#include <string>

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

    std::string s;
    getline(std::cin, s);

    for(ll i = 0; i < s.size(); ++i) {
        s[i] = (char)tolower(s[i]);
    }

    std::cout << s;

    return 0;
}