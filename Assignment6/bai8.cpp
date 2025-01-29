#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    int x; cin >> x;

    for(int i =0;i<n;i++){
        if(a[i]==x){
            for(int j=i;j<n-1;j++){
                a[j] = a[j+1];
            }
            i--;
            n--;
        }

    }
    for(int i=0;i<n;i++) cout << a[i] << " ";
}
