#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int a, b , c;
    cin >> a >> b >> c;
    double p = (a + b + c) * 1.0/2;
    if (a + b > c && b + c > a && a + c > b) {
    	double DienTichTamGiac = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << fixed << setprecision(2) << DienTichTamGiac << endl;

    } else {
                cout << "invalid" << endl;
    }
    return 0;
}
