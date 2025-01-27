#include<bits/stdc++.h>
using namespace std;

int check(int n)
{
    if(n<=1) return 0;
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }
}
int main()
{
    int a; cin >> a;
    int cnt =0;
    for(int i=2;i<a;i++){
        if(check(i)&&check(i+2)&&(i+2)<a){
            cnt++;
            cout << i <<", " << i+2 << endl;
        }
    }
    cout << "Tong: "<< cnt << " cap so sinh doi < " << a;

}
