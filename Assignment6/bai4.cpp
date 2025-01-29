#include<bits/stdc++.h>
using namespace std;
#define MAX 500

int snt(int n, int i =2)
{
    if(n<2) return 0;
    if(i*i>n) return 1;
    if(n%i==0) return 0;
    return snt(n, i+1);
}
int main()
{
    int n; cin >> n;
    int a[MAX];
    bool foundsnt = false;
    for(int i =0;i<n;i++){
        cin >> a[i];
        if(snt(a[i])){
            cout << a[i] << " ";
            foundsnt = true;
        }
    }
    if(foundsnt==false){
        cout << "0";
    }
    return 0;
}
