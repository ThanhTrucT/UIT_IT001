#include<iostream>
#include<bits/stdc++.h>
using namespace std;

float calculate(int n)
{
    float s = 0;

    for(int i =1;i<=n;i++){
        s = sqrt(i+s);
    }
    return s;
}

int main() {
	int n;
	cin >> n;
    cout << setprecision(3) << calculate(n);
}
