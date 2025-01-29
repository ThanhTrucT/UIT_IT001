#include <iostream>
using namespace std;

void mergeArrays(const int a[], int sizeA, const int b[], int sizeB, int c[]) {
    int i = 0, j = 0, k = 0;
    while (i < sizeA && j < sizeB) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    while (i < sizeA) {
        c[k++] = a[i++];
    }

    while (j < sizeB) {
        c[k++] = b[j++];
    }
}

int main() {
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];

    int m; cin >> m;
    int b[m];
    for(int i=0;i<m;i++) cin >> b[i];

    int c[n+m];
    mergeArrays(a, n, b, m, c);
    for(int i=0;i<n+m;i++) cout << c[i] << " ";

    return 0;
}
