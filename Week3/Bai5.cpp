#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[100];
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    } 
        for (int i = 0; i < n / 2; i++) {
            if(a[i] != a[n - i - 1]) {
                count++;
            }
        }
    if (count == 0) {
        cout << "Symmetric array." << endl;
    } else {
        cout << "Asymmetric array." << endl;
    }
    return 0;
}
