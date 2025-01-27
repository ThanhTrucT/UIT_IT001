#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b; cin >> a >> b;
    int ma = ((a+b)+ abs(a-b))/2;
    int mi = ((a+b)-abs(a-b))/2;

    cout << "max = " << ma<< endl;
    cout << "min = " << mi << endl;
}
