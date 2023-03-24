#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#define STR_LEN 16
#define ARR_MAX_LEN 1000


static int GetAllFault(char **arrayA, int arrayASize, char **arrayB, int arrayBSize,
                       char outBuf[][STR_LEN], int maxOutBufLen)
{
    //outBuf表示多个长度为STR_LEN的字符串数组
    
    for (int i=0;i<arrayASize;++i) {
        int n = sizeof(outBuf) / sizeof(outBuf[0]);
        int flag = 0;
        for (int j=0;j<n;++j) {
            if (strcmp(arrayA[i], outBuf[j]) == 0) {
                flag = 1;
                break;
            }
        } 
        if (flag == 1) {
            continue;
        }
        strcpy(outBuf[n],arrayA[i]);
    }
    for (int i=0;i<arrayBSize;++i) {
        int n = sizeof(outBuf) / sizeof(outBuf[0]);
        int flag = 0;
        for (int j=0;j<n;++j) {
            if (strcmp(arrayB[i], outBuf[j]) == 0) {
                flag = 1;
                break;
            }
        }  
        if (flag == 1) {
            continue;
        }
        strcpy(outBuf[n],arrayB[i]);
    }
    return sizeof(outBuf) / sizeof(outBuf[0]);
}


int main() {
    int Asize = 2;
    char s1[][STR_LEN] = {"00001001","00ABCD00"};
    int Bsize = 3;
    char s2[][STR_LEN] = {"FFFFFAAB", "FFFFFAAB", "00ABCD00"};
    char outBuf[][STR_LEN] = {};
    int maxOutBufLen = 30;
    int res = GetAllFault(s1,Asize,s2,Bsize,outBuf,maxOutBufLen);
    int n = sizeof(outBuf)/sizeof(outBuf[0]);
    for (int i=0;i<n;++i) {
        printf("%s ",outBuf[i]);
    }
    return 0;
}