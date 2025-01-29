#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    int p, k; cin >> p >> k;

    for(int i=p+k;i<n;i++){
        a[i-k] = a[i];
    }
    n-=k;
    for(int i=0;i<n;i++) cout << a[i] << " ";

    return 0;

}
