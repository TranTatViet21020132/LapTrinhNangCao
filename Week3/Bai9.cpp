#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
 
using namespace std;
 
int main()
{
    string s;
    getline(cin, s);
    vector<string> words;
    s = " " + s + " ";
 
    int start = -1;
    for(int i = 1; i < s.length()-1; i++){
        if(s[i] != ' ' && s[i-1] == ' '){
            start = i;
        }
        if(s[i] != ' ' && s[i+1] == ' '){
            string w = s.substr(start, i - start + 1);
            words.push_back(w);
        }
    }
    for(int i = 0; i < words.size(); i++){
        cout<<words[i]<<" ";
        }
        return 0;
    }
