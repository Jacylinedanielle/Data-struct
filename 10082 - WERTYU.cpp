#include <bits/stdc++.h>
using namespace std;

int main() {
    // Key mapping
    string s1 = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    
    string input;
    vector<string> lines;
    
    // Read all lines of input
    while (getline(cin, input)) {
        lines.push_back(input);
    }

    for (const string& line : lines) {
        string ans = "";
        for (char c : line) {
            if (c == ' ') {
                ans += ' '; // Preserve spaces
            } else {
                size_t pos = s1.find(c);
                if (pos != string::npos && pos > 0) {
                    ans += s1[pos - 1]; // Get the previous character
                } else {
                    ans += c; // If character is not in s1, append as-is
                }
            }
        }
        cout << ans << endl;
       // cout.flush();
    }

    return 0;
}

