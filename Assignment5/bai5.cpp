#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void input(int &n)
{
    cin >> n;
}
int sum(int n, int &s){
    if(n<10) return n;
    else return s = s + (n%10) + sum(n/10, s);
}

int main() {
    int n, s=0;
    input(n);
    sum(n, s);
    cout << s;
}
