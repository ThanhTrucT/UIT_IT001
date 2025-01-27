#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a,b, c; cin >> a >> b >> c;
    float dtb = (a+b+c)/3;
    cout << "DTB = "<< setprecision(2) << fixed << dtb << endl;
    cout << endl;

    if(dtb>=9&&dtb<=10) cout << "Loai: XUAT SAC";
    else if(dtb>=8&&dtb<9) cout << "Loai: GIOI";
    else if(dtb>=7&&dtb<8) cout << "Loai: KHA";
    else if(dtb>=6&&dtb<7) cout << "Loai: TB KHA";
    else if(dtb>=5&&dtb<6) cout << "Loai: TB";
    else if(dtb>=4&&dtb<5) cout << "Loai: YEU";
    else if(dtb<4) cout << "Loai: KEM";


}
