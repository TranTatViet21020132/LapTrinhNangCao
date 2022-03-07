#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main() {
    double a[100];
    int n;
    cin >> n;
    int i;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, greater<double>());
    for (i = 0; i < n; i++) {
    	cout << fixed << setprecision(2) << a[i] << " ";
	}
    return 0;
}
