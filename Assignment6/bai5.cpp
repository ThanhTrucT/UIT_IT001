#include<bits/stdc++.h>
using namespace std;
#define MAX 500

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i =0;i<n;i++){
        cin >> a[i];
    }
    a[n+1];

    int x, k; cin >> x >> k;
    for(int i=n-1;i>=k;i--){
        a[i+1] = a[i];
    }
    a[k] = x;
    for(int i =0;i<=n;i++){
        cout << a[i] << " ";
   }

}
