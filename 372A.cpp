#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int length;
    length = s.length();
    for(int i = 0; i < length; i++){
        if(s[i] != '.') cout << s[i];
    }
    cout << endl;
    return 0;
}