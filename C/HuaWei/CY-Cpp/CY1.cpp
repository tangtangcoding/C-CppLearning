#include <cstddef>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
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
    unordered_set<string> set;
    for (int i=0;i<arrayA.size();++i) {
        set.insert(arrayA[i]);
    }
    for (int i=0;i<arrayB.size();++i) {
        set.insert(arrayB[i]);
    }
    vector<string> result;
    result.reserve(set.size());
    for (auto p=set.begin();p!=set.end();++p) {
        result.push_back(*p);
    }
    sort(result.begin(),result.end());
    return result;
}


int main() {
    std::vector<int> vec;
    vec.reserve(1000);  // 预分配1000个元素的存储空间

    // 向vector中添加元素
    for (int i = 0; i < 1000; ++i) {
        vec.push_back(i);
    }

    // 输出vector的大小和容量
    std::cout << "Vector size: " << vec.size() << std::endl;
    std::cout << "Vector capacity: " << vec.capacity() << std::endl;

    return 0;
}
