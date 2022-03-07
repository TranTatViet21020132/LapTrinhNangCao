#include <iostream>
#include <string>
using namespace std;

bool CheckLength(string s);
bool CheckFirstChar(string s);
bool CheckAlpha_Normal(string s);

bool CheckLength(string s) {
	if (s.length() < 6 || s.length() > 15) {
		return false;
	} else {
		return true;
    }   
}

bool CheckFirstChar(string s) {
	if (s[0] >= 'a' && s[0] <= 'z' || s[0] >= 'A' && s[0] <= 'Z')  {
		return true;
	} else {
		return false;
	}
}

bool CheckAlpha_Normal(string s) {
    int count1 = 0;
    for (int i = 1; i < s.length(); i++) {
    	if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')) {
			count1++;
	}
}
	if (count1 == s.length() - 1)  {
		return true;
	} else {
		return false;
	}
}

int main() {
	string s;
	getline(cin, s);
	if (CheckLength(s) == true && CheckFirstChar(s) == true && CheckAlpha_Normal(s) == true) {
		cout << "Valid username." << endl;
	} else {
		cout << "Invalid username." << endl;
	}
	return 0;
}
