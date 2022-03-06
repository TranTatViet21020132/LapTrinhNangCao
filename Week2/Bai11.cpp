#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
const int MAX_N = 1000;
int main() {
    int n;
    cin >> n;
    double arrayX[MAX_N];
    for (int i = 0; i < n; i++) {
        cin >> arrayX[i];
    }
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arrayX[i];
    }
    double mean = sum / n;
    double var1 = 0;
    for (int i = 0; i < n; i++) {
        var1 += pow((arrayX[i] - mean), 2);
    }
    cout << fixed << setprecision(2) << var1 / n;
    return 0;
}
