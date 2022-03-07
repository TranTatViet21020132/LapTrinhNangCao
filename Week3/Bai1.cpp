#include <iostream>
using namespace std;
int main() {
    int a[100];
    int b[100];
    int n;
    cin >> n;
    int i = 0;
    int count = 0;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (i = 0; i < n; i++) {
    	if (a[i] != b[i]) {
    		count++;
		}
	}
	if (count == 0) {
		cout << "YES";
	} else {
		cout << "NO";
	}
    return 0;
}
