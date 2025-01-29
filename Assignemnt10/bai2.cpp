#include<bits/stdc++.h>
using namespace std;

struct PhanSo{
    int ts;
    int ms;
};

void Nhap(PhanSo &n)
{
    cin >> n.ts;
    cin >> n.ms;
}

PhanSo Nhap()
{
    PhanSo n;
    cin >> n.ts >> n.ms;

    return n;

}

int SoSanh(PhanSo a, PhanSo b)
{
    float tmp1 = float(a.ts)/a.ms;
    float tmp2 = float(b.ts)/ b.ms;

    if(tmp1 > tmp2 ) return 1;
    else if(tmp1 < tmp2) return -1;
    else if(tmp1 == tmp2 ) return 0;
}

int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    int kq = SoSanh(a, b);
    if (kq == 0)
        std::cout << "Hai phan so bang nhau.";
    else if (kq > 0)
        std::cout << "Phan so thu nhat LON hon phan so thu hai.";
    else
        std::cout << "Phan so thu nhat NHO hon phan so thu hai.";
    return 0;
}
