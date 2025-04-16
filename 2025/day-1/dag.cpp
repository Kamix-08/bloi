#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, q;
    cin >> n >> q;
    
    n = 1 << n;

    char* cur = new char[n];
    char* goa = new char[n];
    
    int miss = 0;

    for(int i=0; i<n; i++) cin >> goa[i];
    for(int i=0; i<n; i++) {
        char t;
        cin >> t;

        cur[i] = t;

        if(t != goa[i])
            ++miss;
    }

    cout << (miss == 0 ? "TAK" : "NIE") << '\n';

    while(q --> 0) {
        int i;
        char t;

        cin >> i >> t;
        --i;

        if(cur[i] != t) {
            if(cur[i] == goa[i]) ++miss;
            else if (t == goa[i]) --miss;

            cur[i] = t;
        }

        cout << (miss == 0 ? "TAK" : "NIE") << '\n';
    }

    delete[] cur;
    delete[] goa;
    
    return 0;
}