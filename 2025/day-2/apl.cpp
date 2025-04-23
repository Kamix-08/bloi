// 100

#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string a, b;
    cin >> a >> b;

    if(a.size() < b.size())
        swap(a, b);

    if(a.size() != b.size()) {
        string pad;
        pad.resize(a.size()-b.size());
        for(char& c : pad) c = '0';
    
        b = pad + b;
    }

    bool carry = false;
    for (long long i=b.size(); i>=0; --i) {
        int sum = a[i]-'0' + b[i]-'0' + carry;
        carry = sum >= 10;
        a[i] = (sum%10)+'0';
    }

    if(carry) cout << 1;
    cout << a;
    
    return 0;
}