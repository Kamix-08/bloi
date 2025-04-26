#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    int counts[26];
    for(int i=0; i<26; i++)
        counts[i] = 0;

    while(n --> 0) {
        char l;
        cin >> l;

        counts[l - 'a']++;
    }

    bool oddFound = false;

    for(int i=0; i<26; i++) {
        if(counts[i] % 2 == 0) 
            continue;

        if(oddFound) {
            cout << "NIE";
            return 0;
        }

        oddFound = true;
    }

    cout << "TAK";
    
    return 0;
}