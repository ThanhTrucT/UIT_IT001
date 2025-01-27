#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a[3];
    for(int i=0;i<3;i++) cin >> a[i];

    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(a[j]<a[i]){
                swap(a[i], a[j]);
            }
        }
    }
    for(int i=0;i<3;i++) cout << a[i] << " ";


}
