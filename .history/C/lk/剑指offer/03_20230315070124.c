#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*03 数组中重复的数字*/
int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int findRepeatNumber(int* nums, int numsSize){
    if (numsSize == 0) {
        return -1;
    }
    qsort(nums,numsSize,sizeof(int),cmp);
    for (int i=1;i<numsSize;++i) {
        if (nums[i] == nums[i-1]) {
            return nums[i];
        }
    }
    return -1;
}

/*012 矩阵中的路径*/
bool exist(char** board, int boardSize, int* boardColSize, char* word){

    for (int i=0;i<boardSize;++i) {
        for (int j=0;j<boardColSize;++j) {
            
        }
    }
}


int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
