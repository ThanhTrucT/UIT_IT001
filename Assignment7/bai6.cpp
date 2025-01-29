#include<bits/stdc++.h>
using namespace std;
#define MAX 500
int check(float a[MAX][MAX], int n)
{
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j&&a[i][j]!=0) return false;
        }
    }
    return true;
}
int main()
{
    int n, m; cin >> n >> m;
    float a[MAX][MAX];
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    if(check(a,n)) cout << "Yes";
    else cout << "No";
}
