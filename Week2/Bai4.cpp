#include <iostream>
using namespace std;
int main() {
    int total, totalLegs;
    cin >> total >> totalLegs;
    if (totalLegs - 2*total > 0 && (totalLegs - 2*total) % 2 == 0) {
    	cout << "chicken = " << (4 * total - totalLegs) / 2 << ", dog = " << (totalLegs - 2*total) /2;
	} else {
		cout << "invalid";
	}
	return 0;	    
}
