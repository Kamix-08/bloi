#include <iostream>

using namespace std;

#define MOD static_cast<unsigned long long>(1e9+9)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long n;
    cin >> n;

    unsigned long long a = 0;
    unsigned long long b = 0;

    for(int i=0; i<n; i++) {
        unsigned long long tmp;
        cin >> tmp;
        a = (a + tmp) % MOD;
    }

    for(int i=0; i<n; i++) {
        unsigned long long tmp;
        cin >> tmp;
        b = (b + tmp) % MOD;
    }

    cout << (a == b ? "TAK" : "NIE");
    
    return 0;
}