
#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool balancedStack(string s) {
    stack<char> ch;

    for (int i = 0; i < s.size(); i++) {
        char a = s[i];

        if (a == '(' || a == '[' || a == '{') {
            ch.push(a);
        }
        else {
            if (ch.empty()) {
                return false;
            }

            char top = ch.top();

            if ((a == ')' && top != '(') ||
                (a == ']' && top != '[') ||
                (a == '}' && top != '{')) {
                return false;
            }

            ch.pop();
        }
    }

    return ch.empty();
}

int main() {
    string s1 = "{[()]}";
    string s2 = "([)]";

    cout << balancedStack(s1) << endl;
    cout << balancedStack(s2) << endl;

    return 0;
}
