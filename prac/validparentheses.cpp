#include <bits/stdc++.h>

using namespace std;

int main() {
    string s = "{[]}";
    stack<char> sc;
    bool ans = true;

    for (int ii = 0; ii < s.length(); ii++) {
        if (s[ii] == '(' || s[ii] == '{' || s[ii] == '[') {
            sc.push(s[ii]);
        } else if (s[ii] == ')' || s[ii] == ']' || s[ii] == '}') {
            if (sc.empty()) {
                ans = false;
                break;
            }
            if ((s[ii] == ')' && sc.top() == '(') ||
                (s[ii] == ']' && sc.top() == '[') ||
                (s[ii] == '}' && sc.top() == '{')) {
                sc.pop();
            } else {
                ans = false;
                break;
            }
        }
    }

    // Check if the stack is empty to ensure all open brackets have matching close brackets
    if (!sc.empty()) {
        ans = false;
    }

    cout << (ans ? "true" : "false") << endl;

    return 0;
}
