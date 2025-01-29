#include<bits/stdc++.h>
using namespace std;

struct PhanSo{
    int ts;
    int ms;
};

void Nhap(PhanSo &a)
{
    cin >> a.ts;
    cin >> a.ms;

}
PhanSo Nhap()
{
    PhanSo n;
    cin >> n.ts;
    cin >> n.ms;
    return n;
}

PhanSo rutgon(PhanSo a)
{
    int ucln = gcd(a.ts, a.ms);
    a.ts/=ucln;
    a.ms/=ucln;
    return a;
}

PhanSo Cong(PhanSo a, PhanSo b)
{
    int msc = a.ms * b.ms;
    int tsc = a.ts * b.ms + b.ts *a.ms;

    PhanSo c;
    c.ts = tsc;
    c.ms = msc;

    //cout << tsc << " " << msc;

    if(c.ts != rutgon(c).ts) return rutgon(c);
    else return c;
}
void Xuat(PhanSo a)
{
    if(a.ts % a.ms == 0 ) cout << a.ts / a.ms << endl;
    else if (a.ts > 0 && a.ms < 0) cout << a.ts* -1 << "/"<< a.ms * -1 << endl;
    else if(a.ts <0 && a.ms < 0 ) cout << a.ts* -1 << "/" << a.ms * -1 << endl;
    else cout << a.ts << "/" << a.ms << endl;
}


int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    Xuat(Cong(a, b));
    return 0;
}
