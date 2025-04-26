#include <iostream>

using namespace std;

#define ull unsigned long long

ull fastpow(ull x, ull n, ull MOD) {
    ull res = 1;

    while(n) {
        if(n & 1) res = (res * x) % MOD;

        n >>= 1;
        x = (x * x) % MOD;
    }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ull p, d, m;
    cin >> p >> d >> m;

    cout << fastpow(p, d + 1, m);
    
    return 0;
}