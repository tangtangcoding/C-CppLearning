#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//1.单板告警统计

// # 暴力解法
// vector<string> GetAllFault(const vector<string> &arrayA, const vector<string> &arrayB)
// {
//     vector<string> result;
//     for (int i=0;i<arrayA.size();++i) {
//         bool f = false;
//         for (int j=0;j<result.size();++j) {
//             if (arrayA[i] == result[j]) {
//                 f = true;
//                 break;
//             }
//         }
//         if (!f) {
//             result.push_back(arrayA[i]);
//         }
//     }
//     for (int i=0;i<arrayB.size();++i) {
//         bool f = false;
//         for (int j=0;j<result.size();++j) {
//             if (arrayB[i] == result[j]) {
//                 f = true;
//                 break;
//             }
//         }
//         if (!f) {
//             result.push_back(arrayB[i]);
//         }
//     }
//     sort(result.begin(),result.end());
//     return result;
// }

vector<string> GetAllFault(const vector<string> &arrayA, const vector<string> &arrayB) {

}