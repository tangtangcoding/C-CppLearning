#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#define STR_LEN 16
#define ARR_MAX_LEN 1000

// int compare(const void *a, const void *b) {
//     const char *str1 = *(const char **)a;
//     const char *str2 = *(const char **)b;
//     return strcmp(str1, str2);
// }

int compare(const void *a, const void *b)
{
    return strcmp(*(char **)a, *(char **)b);  
}


static int GetAllFault(char **arrayA, int arrayASize, char **arrayB, int arrayBSize,
                       char outBuf[][STR_LEN], int maxOutBufLen)
{
    //outBuf表示多个长度为STR_LEN的字符串数组 
    int cur = 0;
    for (int i=0;i<arrayASize;++i) {
        int n = cur;
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
        cur++;
    }
    for (int i=0;i<arrayBSize;++i) {
        int n = cur;
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
        cur++;
    }
    qsort(outBuf, cur, sizeof(char*), compare);
    return cur;
}


int main() {
    int Asize = 2;
    char **s1 = (char **)malloc(Asize * sizeof(char *));
    for (int i=0;i<Asize;++i) {
        s1[i] = (char *) malloc (STR_LEN * sizeof(char));
    }
    strcpy(s1[0], "00001001");
    strcpy(s1[1], "00ABCD00");


    int Bsize = 3;
    char **s2 = (char **) malloc (Asize * sizeof(char *));
    for (int i=0;i<Bsize;++i) {
        s2[i] = (char *) malloc (STR_LEN * sizeof(char));
    }
    strcpy(s2[0], "FFFFFAAB");
    strcpy(s2[1], "FFFFFAAB");
    strcpy(s2[2], "00ABCD00");

    char outBuf[][STR_LEN] = {};
    int maxOutBufLen = 30;
    int res = GetAllFault(s1,Asize,s2,Bsize,outBuf,maxOutBufLen);
    int n = res;
    for (int i=0;i<n;++i) {
        printf("%s ",outBuf[i]);
    }
    return 0;
}