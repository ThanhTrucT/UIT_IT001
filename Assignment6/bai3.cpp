#include<bits/stdc++.h>
using namespace std;
#define MAX 500

int main()
{
    int n; cin >> n;
    int a[MAX];
    for(int i =0;i<n;i++){
        cin >> a[i];
        if(i%2==1){
            cout << a[i] << " ";
        }
    }
}
