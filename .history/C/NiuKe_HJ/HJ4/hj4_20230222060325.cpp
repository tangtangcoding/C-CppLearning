#include <iostream>
#include <string>
#include<vector>
using namespace std;

int main() {
    string s;
    std::vector<string> res;
    while (cin >> s){
        for (int i=0;i<s.size();) {
            int a = i;
            int b = i + 8;
            string str;
            if (b > s.size()) {
                str = s.substr(i,s.size());
                int r = b - s.size();
                for (int k=0;k<r;++k){
                    str.append("0");
                }
            } else {
                str = s.substr(a,8);
            }
            i+=8;
            res.push_back(str);
        }
    }
   
    for (auto &x : res) {
        cout << x << endl;
    }
    
}
// 64 位输出请用 printf("%lld")