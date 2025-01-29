#include <iostream>
using namespace std;

int reverse(int n)
{
    int res =0;
    while(n!=0){
        int tmp = n%10;
        res = res*10 + tmp;
        n/=10;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    cout << reverse(n);
}
