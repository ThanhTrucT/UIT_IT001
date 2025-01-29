#include <iostream>
#include <iomanip>
using namespace std;
double gthua(int n){
    double ans = 1.00;

    for(int i = 1; i <= n; ++i) ans*=i;

    return ans;
}

double mu(double x, int n){
    double ans = 1.00;
    for(int i = 1; i <= n; ++i) ans *= x;
    return ans;
}

double tinh(double x, int n, double s){
    double a = mu(-1, n)*(mu(x, 2*n+1)/gthua(2*n+1));
    double res = s+a;
    double tmp = mu(10,4);
    if(res*tmp/tmp == s*tmp/tmp) return s;
    return tinh(x, n+1, s+a);

}

int main(){
    double x;

    cin >> x;

    cout << fixed << setprecision(4) << tinh(x, 0, 0);

    return 0;
}
