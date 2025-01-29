#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int main()
{

    char s[MAX];
    cin.getline(s,MAX);
    int check = 1;
    for(int i =0;s[i]!=0;i++){
        if(isdigit(s[i])){
            check = 0;
            break;
        }
    }
    if(check==1){
        puts(s);
    }
    else cout << "CHUOI KHONG HOP LE.";
}
