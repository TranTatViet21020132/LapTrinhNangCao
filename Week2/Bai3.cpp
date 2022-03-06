#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int lowerbound;
    int upperbound;
    cin >> lowerbound >> upperbound;
    for (int  i = ceil(sqrt(lowerbound)); i <= floor(sqrt(upperbound)); i++) {
        cout << i * i << " ";
    }
    return 0;
}
