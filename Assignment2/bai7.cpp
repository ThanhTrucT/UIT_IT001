#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a,b,c; cin >> a >> b >> c;
    float delta = b*b - 4*a*c;
    if(a==0&&b==0||a==0) return 0;
    if(delta<0) cout << "PTVN";
    else if(delta==0) cout << "PT co nghiem kep: x1 = x2 = " << float(-b)/(2*a);
    else{
        cout << "PT co hai nghiem phan biet:" << endl;
        cout << "x1 = " << float((-b+sqrt(delta))/(2*a)) << endl;
        cout << "x2 = " << float((-b-sqrt(delta))/(2*a)) << endl;
    }

}
