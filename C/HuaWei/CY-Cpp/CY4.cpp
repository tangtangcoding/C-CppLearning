#include <cctype>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int CalcExpression(const string &expression)
{
    vector<int> v;
    int a,b;
    int p = 0;
    vector<string> str;
    int i = 0;
    for (;i<expression.size();++i) {
        if (expression[i] == ',') {
            str.push_back(expression.substr(p,i - p));
            p = i + 1;
        }
    }
    str.push_back(expression.substr(p,i-p));
    for (int i=0;i<str.size();++i) {
        if (str[i].size() == 1 && !isdigit(str[i].at(0))) {
            b = v.back();
            v.pop_back();
            a = v.back();
            v.pop_back();
            if (str[i] == "+") {
                v.push_back(a + b);
            } else if (str[i] == "-") {
                v.push_back(a - b);
            } else if (str[i] == "*") {
                v.push_back(a * b);
            } else if (str[i] == "/") {
                v.push_back(a / b);
            }
        }
        else {
            int n = stoi(str[i]);
            v.push_back(n);
        }
    }
 
    return v.back();
}


int main() {
    string s = "9,3,5,-,2,*,+";
    cout << CalcExpression(s);

}