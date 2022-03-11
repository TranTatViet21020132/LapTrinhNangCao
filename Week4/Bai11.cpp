#include <bits/stdc++.h>

bool isVowel(char c)
{
    return (c == 'A' || c == 'E' || c == 'I' ||
            c == 'O' || c == 'U' || c == 'a' ||
            c == 'e' || c == 'i' || c == 'o' ||
            c == 'u');
}
 
string pigLatin(string s)
{   
        if (isVowel(s[0])) {
           return s + "way";
        } else {
    char s1 = s[0];
	for (int i = 0; i < s.length(); i++) {
		s[i] = s[i + 1];
	}
	s[s.length() - 1] = s1; 
	return s + "ay";
    }
}

