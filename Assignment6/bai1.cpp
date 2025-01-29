#include <iostream>
using namespace std;
#define MAX 100

int pow(int a, int b)
{
    int res = 1;
    for(int i=0;i<b;i++){
        res *= a;
    }
    return res;

}
int check1(int n)
{
    int dem=0, tam = n;
    while(n!=0){
        int tmp = n%10;
        dem++;
        n/=10;
    }
    dem-=1;
    int sodau = tam/(pow(10,dem));
    return sodau;
}
void Nhapmang(int a[], int n)
{
    for(int i =0;i<n;i++){
        cin >> a[i];
    }
}
bool isBenford(int a[], int n)
{
    int cnt1 = 0, cnt4 = 0;

    for(int i =0;i<n;i++){
        if(check1(a[i])==1){
            cnt1++;
        }
        if(check1(a[i])==4) cnt4++;
    }
    if(cnt1==3&&cnt4==1) return true;
    else return false;

}



int main()
{
	int a[MAX], n = 10;
	Nhapmang(a, n);
	if (isBenford(a, n) == true)
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;
	return 0;
}
