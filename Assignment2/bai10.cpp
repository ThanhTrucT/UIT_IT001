#include <bits/stdc++.h>

using namespace std;

int main() {
    int ngay, thang, nam;

    cin >> ngay >> thang >> nam;

    if(nam <= 0) {
        cout << "Nam khong hop le.";
        return 0;
    }
    if(thang < 1 || thang > 12) {
        cout << "Thang khong hop le.";
        return 0;
    }
    if(ngay <= 0) {
        cout << ngay << "/" << thang << "/" << nam << " la ngay khong hop le.";
        return 0;
    }
    if(thang == 2 && nam%4 == 0 && nam%100 != 0 && ngay > 29) {
        cout << ngay << "/" << thang << "/" << nam << " la ngay khong hop le.";
        return 0;
    }
    if(nam%4 != 0 && thang == 2 && ngay > 28) {
        cout << ngay << "/" << thang << "/" << nam << " la ngay khong hop le.";
        return 0;
    }
    if(thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        if(ngay > 30) {
            cout << ngay << "/" << thang << "/" << nam << " la ngay khong hop le.";
            return 0;
        }
    }
    if(thang != 2 && thang != 4 && thang != 6 && thang != 9 && thang != 11 && ngay > 31) {
        cout << ngay << "/" << thang << "/" << nam << " la ngay khong hop le.";
        return 0;
    }
    if(ngay > 31) {
        cout << ngay << "/" << thang << "/" << nam << " la ngay khong hop le.";
        return 0;
    }

    cout << ngay << "/" << thang << "/" << nam << " la ngay hop le.";

    return 0;
}
