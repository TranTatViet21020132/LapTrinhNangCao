#include <bits/stdc++.h>
using namespace std;
int main() {
	string text;
	getline(cin, text);
	int found = 10;
	while (found != string::npos) {
		found = text.find("Zues");
		if (found >= 0) {
			swap(text[found + 1], text[found + 2]);
		}
	}
	cout << text;
}
