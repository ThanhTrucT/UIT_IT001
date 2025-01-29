#include<iostream>
using namespace std;

int snt(int n)
{
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;

}

int reverse(int n, int rev =0)
{
    if(n==0) return rev;
    rev = rev*10 + n%10;
    return reverse(n/10, rev);
}


int main()
{
    int a,b; cin >> a >> b;
    int cnt =0;
    for(int i=a;i<=b;i++){
        if(snt(i)&&snt(reverse(i))){
            cnt++;
        }
    }
    cout << cnt;
}
