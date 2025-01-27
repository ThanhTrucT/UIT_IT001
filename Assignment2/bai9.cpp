#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a,b,c; cin >> a >> b >>c;
    if((a+b)>c&&(b+c)>a&&(a+c)>b){
        if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b) cout << "Tam giac vuong, ";
        else if(a==b&&b==c) cout << "Tam giac deu, ";
        else if(a==b||b==c||a==c) cout << "Tam giac can, ";
        else cout << "Tam giac thuong, ";
        float p = float((a+b+c))/2;
        float dt = sqrt(p*(p-a)*(p-b)*(p-c));
        //cout << p ;
        cout << "dien tich = " << setprecision(2) << fixed << dt;
    }
    else cout << "Khong phai tam giac";

}
