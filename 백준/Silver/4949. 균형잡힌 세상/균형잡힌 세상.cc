#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    while (1) {
        string str;
        getline(cin, str);
        if (str == ".")   // 탈출조건
            break;

        stack<char> s;
        bool flag = 0;

        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '(' || str[i] == '[')
                s.push(str[i]);

            else if (str[i] == ')') {
                if (!s.empty() && s.top() == '(')
                    s.pop();
                else {
                    flag = 1;
                    break;
                }
            }

            else if (str[i] == ']') {
                if (!s.empty() && s.top() == '[')
                    s.pop();
                else {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 0 && s.empty())
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
