#include <stdio.h>
#include <stdlib.h>
/*03 数组中重复的数字*/


// int cmp(const void *a, const void *b) {
//     return (*(int*)a - *(int*)b);
// }
// int findRepeatNumber(int* nums, int numsSize){
//     if (numsSize == 0) {
//         return -1;
//     }
//     qsort(nums,numsSize,sizeof(int),cmp);
//     for (int i=1;i<numsSize;++i) {
//         if (nums[i] == nums[i-1]) {
//             return nums[i];
//         }
//     }
//     return -1;
// }


int findRepeatNumber(int* nums, int numsSize){
    int m[100000 + 1] = {0};
    for (int i=0;i<numsSize;++i) {
        m[nums[i]]++;
        if (m[nums[i]] > 1) {
            return nums[i];
        }
    }
    return -1;
}


int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
