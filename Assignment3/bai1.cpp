#include<bits/stdc++.h>
using namespace std;

int a[30];

int fibo(int n)
{
    a[0] = 0, a[1] = 1;
    for(int i=2;i<=n;i++){
        a[i] = a[i-1] + a[i-2];
    }
    return a[n];

}
int main()
{
    int a; cin >> a;
    if(a>=1&&a<=30) cout << fibo(a);
    else cout << "So " <<a<< " khong nam trong khoang [1,30].";
}
