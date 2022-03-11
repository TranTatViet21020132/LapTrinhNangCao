#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long n1 = n;
    long long n2 = 0 - n;
    long long count1 = 0;
    long long count2 = 0;
    if (n > 0) {
        while (n1 > 0) {
            n1 /= 10;
            count1++;
        }
        cout << count1;
    } else {
        while (n2 > 0) {
            n2 /= 10;
            count2++;
        }
        cout << count2;
    } 
	return 0;	    
}
