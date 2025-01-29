#include<iostream>
int input()
{
    int n; std::cin >> n;
    return n;
}

void input(int &n)
{
    std::cin >> n;
}

int TongUocChung(int a, int b)
{
    int res =0;
    int ma = std::max(a,b);
    for(int i=1;i<=ma;i++){
        if((a%i==0)&&(b%i==0)){
            res+=i;
        }
    }
    return res;
}

int main(){
    int a, b;
    a=input();
    input(b);
    std::cout << TongUocChung(a, b);
    return 0;
}
