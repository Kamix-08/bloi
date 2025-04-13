#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

#define ll long long

ll binsearch(ll* arr, int n, ll v) {
    int l = 0;
    int r = n - 1;
    int m;

    while(l <= r) {
        m = (l + r) / 2;
        int f = arr[m];

        if(f == v) return f;

        if(f < v) l = m + 1;
        else r = m - 1;
    }

    return arr[m] < v ? arr[m] : arr[m - 1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    ll* prices = new ll[++n];
    for(int i=1; i<n; i++) cin >> prices[i];
    prices[0] = -1;

    sort(prices, prices + n);

    int q;
    cin >> q;

    while(q --> 0) {
        ll b;
        cin >> b;

        cout << binsearch(prices, n, b) << '\n';
    }

    delete[] prices;
    
    return 0;
}