#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    int ma = INT_MIN;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]>=ma){
            ma = a[i];
        }
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(a[i]==ma) cnt++;
    }
    cout << ma << endl << cnt;
}
