#include<bits/stdc++.h>
using namespace std;

int secondlarges(int a[], int n)
{
    int max1 = a[0], max2 =0;
    for(int i=1;i<n;i++){
        if(a[i]>max1){
            max2 = max1;
            max1= a[i];
        }
        else if(a[i]>max2&&a[i]!=max1){
            max2 = a[i];
        }
    }
    return max2;
}
int main()
{
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    if(secondlarges(a,n)!=0) cout << secondlarges(a,n);
    else cout << "0";
    return 0;

}
