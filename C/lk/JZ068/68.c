/*
 * @Author: James jamesxh@foxmail.com
 * @Date: 2023-03-14 06:17:44
 * @LastEditors: James jamesxh@foxmail.com
 * @LastEditTime: 2023-03-14 06:23:16
 * @FilePath: /C-CppLearning/C/lk/JZ068/68.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target){
    for (int i=1;i<numsSize;++i) {
        if (target == nums[i-1]) {
            return i-1;
        } else if (target == nums[i]) {
            return i;
        } else if (target > nums[i-1] && target < nums[i]) {
            // insert 
            return i + 1;
        }
    }
}


int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
