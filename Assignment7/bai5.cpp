#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    float a[n][m], s =0;

    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
            if(i==j){
                s+=a[i][j];
            }
        }
    }
    cout << s;
}
