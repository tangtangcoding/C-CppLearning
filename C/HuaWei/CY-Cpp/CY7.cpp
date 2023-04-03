#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// 待实现函数，在此函数中填入答题代码;
vector<string> vec;
int m[26] = {0};
string result;
int size = 0;
void dfs(const string& input,int i) {
    vec.push_back(result);
    if (i == input.size()) {
        return;
    }
    for (int start=i;start<input.size();++start) {
        char c =  input[start];
        if (m[c-'a'] == 1) {
            continue;
        }
        m[c-'a'] = 1;
        result += c;
        dfs(input,start+1);
        m[c-'a'] = 0;
        result.pop_back();
    }
}
int GetCountOfSubString(const string &input)
{
    dfs(input,0);
    return 0;
}
int main(void) {
    int res = GetCountOfSubString("abac");
    for (int i=0;i<vec.size();++i) {
        cout << vec[i] << endl;
    } 
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    cout << endl;
    for (int i=0;i<vec.size();++i) {
        cout << vec[i] << endl;
    } 
    
    return 0;
}