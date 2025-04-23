// 79

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long n;
    cin >> n;

    unsigned long long a = 0;

    for(int i=0; i<n; i++) {
        unsigned long long tmp;
        cin >> tmp;

        a += tmp;
    }

    for(int i=0; i<n; i++) {
        unsigned long long tmp;
        cin >> tmp;

        a -= tmp;
    }

    cout << (a == 0 ? "TAK" : "NIE");
    
    return 0;
}