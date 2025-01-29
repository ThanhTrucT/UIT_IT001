#include<bits/stdc++.h>
using namespace std;

int so_chinh_phuong(int n)
{
    int i = 0;
    while(i*i<=n){
        if(i*i==n){
            return 1;
        }
        i++;
    }
    return 0;

}

int sum_all_square(int n)
{
    int res = 0;
    for(int i=1;i<=n;i++){
        if(n%i==0&&so_chinh_phuong(i)){
            res+=i;
        }
    }
    return res;
}
int main() {
    int n;
    cin>>n;
    cout << sum_all_square(n);
}
