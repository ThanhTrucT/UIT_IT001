#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin >> n;
    long long sum1 = 1, sum2=1;
    if(n%2==0){
        for(int i=2;i<=n;i+=2){
            sum1*=i;
        }
        cout << sum1;
    }
    else{
        for(int i=1;i<=n;i+=2){
            sum2*=i;
        }
        cout << sum2;
    }

}
