#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    double a[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    cin >> a[n];
    sort(a, a + n + 1);
   for (int i = 0; i <= n; i++) {
        cout << fixed << setprecision(2) << a[i] << " ";
   }
   return 0;
}
