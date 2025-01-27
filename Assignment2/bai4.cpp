
#include <iostream>
#include <cmath>


int main()
{
    double a;
    int n;
    std::cin >> a >> n;int t = round(a*n);
    std::cout.precision(10);
    std::cout << double(t)/n;
    return 0;
}
