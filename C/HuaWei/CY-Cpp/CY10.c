#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>
int cmp0(const void *a, const void *b) {
    return *(const int *)a - *(const int *)b;
}
int cmp1(const void *a, const void *b) {
    const char *s1 = (const char *)a;
    const char *s2 = (const char *)b;
    if (islower(*s1) && islower(*s2)) {
        return s1 - s2;
    } else if (islower(*s1) && isupper(*s2)) {
        return s1 - s2;
    } else if (isupper(*s1) && islower(*s2)) {
        return s2 - s1;
    } 
    return *s1 - *s2;
}
void CharacterSort(char *inputStr, char *output, int outputSize)
{
    char *s1 = (char*) malloc(sizeof(char) * outputSize);
    char *s2 = (char*) malloc(sizeof(char) * outputSize);
    int i = 0;
    int j = 0;
    for (int k=0;k<outputSize;++k) {
        if (isdigit(inputStr[k])) {
            s1[i++] = inputStr[k];
        } else {
            s2[j++] = inputStr[k];
        }
    }
    // s1[i] = s2[j] = '\0';
    qsort(s1, strlen(s1), sizeof(char),cmp0);
    qsort(s2, strlen(s2), sizeof(char),cmp1);
   // printf("%s %s %d %d",s1,s2,strlen(s1),strlen(s2));
    i = 0;
    int i1 = 0;
    int j1 = 0;
    for (int k=0;k<outputSize;++k) {
        if (isdigit(inputStr[k])) {
            output[i++] = s1[i1++]; 
        } else {
            output[i++] = s2[j1++];
        }
    }
    printf("%s %d %d",output,outputSize,strlen(output));
    return; 
}
 
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         vbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb
int main() {
    char in[7] = {'a','2','C','B','1','c','\0'};
    char *input = in;
    char *out = (char*) malloc (sizeof(char) * 6);
    CharacterSort(in, out, 6);
}