#include<bits/stdc++.h>
using namespace std;

int check(string s)
{
    int l = 0, r = s.length()-1;
    while(l<=r){
        if(s[l]!=s[r]){
            return 0;
        }
        l++; r--;
    }
    return 1;
}
int main()
{
    string s; cin >> s;
    if(check(s)) cout << "true";
    else cout << "false";

}
