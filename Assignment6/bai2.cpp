
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100

void NhapmangSNT(int a[], int &n);
int SoPhanTuChuaY(int a[], int n,int y);

bool snt(int n, int i=2)
{
    if(i*i>n) return 1;
    if(n%i==0) return 0;
    return snt(n,i+1);
}

void NhapmangSNT(int a[], int &n)
{
    cin >> n;
    for(int i=0;i<n;i++){
        a[i] = 0;
    }
}
int check(int n, int y)
{
    while(n!=0){
        int tmp = n%10;
        if(tmp==y) return 1;
        n/=10;
    }
    return 0;
}

int SoPhanTuChuaY(int a[], int n, int y)
{
    int num= 2, i = 0, cnt =0;;
    while(i<n){
        if(snt(num)){
            a[i] = num;
            i++;
        }
        num++;
    }

    for(int i =0;i<n;i++){
        if(check(a[i],y)){
            cnt++;
        }
    }
    return cnt;
}


int main()
{
	int a[MAX], n, y;
	cin >>y;
	NhapmangSNT(a,n);
	cout << SoPhanTuChuaY(a, n, y) << endl;;
	return 0;
}
