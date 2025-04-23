// 25

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> a, b;
    a.resize(n);
    b.resize(n);

    for(int i=0; i<n; i++) {
        int tmp;
        cin >> tmp;

        a[i] = b[i] = tmp;
    }

    sort(b.begin(), b.end());

    int count = 0;
    for(int i=0; i<n; i++)
        count += (a[i] != b[i]);

    cout << count*(count-1)/2;
    
    return 0;
}