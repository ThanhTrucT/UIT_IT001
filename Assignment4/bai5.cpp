#include<iostream>
void input(int &n)
{
    std::cin >> n;
}

int TongChuSo(int m)
{
    int res =0;
    while(m!=0){
        res+=m%10;
        m/=10;
    }
    return res;
}

int main(){
    int a;
    input(a);
    std::cout << TongChuSo(a);
    return 0;
}
