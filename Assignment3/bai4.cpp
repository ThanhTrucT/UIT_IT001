#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b,n; cin >> a >> b>> n;
    long long res = a*b;
    if(n==0) res = 0;
    else{
        for(int i=2;i<=n;i++){
            a++; b++;
            res += (a*b);
        }
    }
    cout << res;

}
