#include <iostream>

using namespace std;

int* arr;

unsigned long long merge(int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int* l_tmp = new int[n1];
    int* r_tmp = new int[n2];

    for(int i=0; i<n1; i++) l_tmp[i] = arr[l + i];
    for(int i=0; i<n2; i++) r_tmp[i] = arr[m + 1 + i];

    int i, j;
    i = j = 0;

    int k = l;
    unsigned long long s = 0;

    while(i < n1 && j < n2) {
        if(l_tmp[i] < r_tmp[j]) {
            arr[k] = l_tmp[i];
            ++i;
        } else {
            arr[k] = r_tmp[j];
            ++j;
            s += n1 - i;
        }
        ++k;
    }

    while(i < n1) {
        arr[k] = l_tmp[i];
        ++i; ++k;
    }

    while(j < n2) {
        arr[k] = r_tmp[j];
        ++j; ++k;
    }

    delete[] l_tmp;
    delete[] r_tmp;

    return s;
}

unsigned long long merge_sort(int l, int r) {
    if(l >= r) return 0;

    int m = (l+r)/2;
    unsigned long long s = 0;

    s += merge_sort(l, m);
    s += merge_sort(m+1, r);

    return s + merge(l, m, r);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    arr = new int[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    cout << merge_sort(0, n-1);

    delete[] arr;

    return 0;
}