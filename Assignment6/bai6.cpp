#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n], ma = INT_MIN, cnt = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        ma = max(ma, a[i]);

    }
    for(int i =0;i<n;i++){
        if(a[i]==ma){
            cnt++;
        }
    }
    cout << ma << endl << cnt;
}
