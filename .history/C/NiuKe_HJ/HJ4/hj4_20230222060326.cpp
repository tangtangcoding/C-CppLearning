/*
 * @Author: James jamesxh@foxmail.com
 * @Date: 2023-02-22 06:03:20
 * @LastEditors: James jamesxh@foxmail.com
 * @LastEditTime: 2023-02-22 06:03:24
 * @FilePath: /C-CppLearning/C/NiuKe_HJ/HJ4/hj4.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
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