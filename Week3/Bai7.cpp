#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int Alpha = 0;
    int Number = 0;
    int Other = 0;
    for (int i = 0; i < s.length(); i++) {
        if ('a' <= s[i] && s[i] <= 'z' || 'A' <= s[i] && s[i] <= 'Z') {
            Alpha++;
        } else if ('0' <= s[i] && s[i] <= '9') {
            Number++;
        } else {
            Other++;
        }
    }
    cout << Alpha << " " << Number << " " << Other << endl;
    return 0;
}
