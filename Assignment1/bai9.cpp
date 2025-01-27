#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b,c; cin >> a >> b >> c;
    float p = (a+b+c)/2;
    float dt = sqrt(p*(p-a)*(p-b)*(p-c));

    cout << setprecision(2) << fixed << dt;

}
