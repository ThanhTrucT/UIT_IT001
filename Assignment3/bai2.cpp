#include<bits/stdc++.h>
using namespace std;

int check(int n)
{
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;

        }
    }
    return 1;
}
int main()
{
    int a; cin >> a;
    if(a<=1) cout << -1;
    else cout << check(a);

}
