#include <iostream>
#include <stack>
using namespace std;

bool BalanceBracket(string s) {
    stack<char> st;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
        }
        else {
            if(st.size() == 0) return false;

            char top = st.top();
            if((s[i] == ')' && top != '(') || (s[i] == '}' && top != '{') || (s[i] == ']' && top != '[')) {
                return false;
            }
            st.pop();
        }
    }

    return st.size() == 0;
}

int main() {
    string s = "()))((";
    cout << (BalanceBracket(s) ? "Balanced" : "Not Balanced") << endl;

    return 0;
}
