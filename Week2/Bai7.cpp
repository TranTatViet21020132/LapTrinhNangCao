#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double i = 1;
    double n;
    cin >> n;
    double sum = 1, oldsum = 0, newElement = 1;
    double division;
    while (sum - oldsum > 0.001) 
    {
        division = n / i;
        newElement *= division;
        oldsum = sum;
        sum += newElement;
        i++;
    }
    cout << fixed << setprecision(4) << sum;
    return 0;
}
