#include <iostream>
#include <math.h>
using namespace std;
int n, a[55];

int ktnt(int n){
    if(n < 2) return 0;

    for(int i = 2; i <= sqrt(n); ++i){
        if(n%i == 0) return 0;
    }

    return 1;
}

int tongsongto(int n){
    if(n == 0) return 0;

    return a[n]+tongsongto(n-1);
}
