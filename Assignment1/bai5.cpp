#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y; cin >> x>>y;
    float thuong = float(x)/y;

    cout << x << " + " << y << " = " << x+y << endl;
    cout << x << " - " << y << " = " << x-y << endl;
    cout << x << " x " << y << " = " << x*y << endl;
    cout << x << " : " << y << " = " << setprecision(2) << fixed << thuong << endl;


}
