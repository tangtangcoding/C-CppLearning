/*
 * @Author: James jamesxh@foxmail.com
 * @Date: 2023-03-14 01:18:01
 * @LastEditors: James jamesxh@foxmail.com
 * @LastEditTime: 2023-03-14 04:34:37
 * @FilePath: /C-CppLearning/C/lk/JZ034/34.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int m[128] = {0};

int cmp(const void* w1,const void* w2) {
    return strcmp((char *)w1,(char *)w2) ; 
}

int tab[26] = {0};

int str_cmp(const char* a, const char* b) {
    int a_sz = strlen(a), b_sz = strlen(b), i = 0, j = 0;
    while (i < a_sz && j < b_sz) {
        int a_val = tab[a[i] - 'a'], b_val = tab[b[j] - 'a'];
        if (a_val > b_val) return 0;
        else if (a_val < b_val) return 1;
        ++i, ++j;
    }
    return a_sz <= b_sz;
}

bool isAlienSorted(char ** words, int wordsSize, char * order) {
    for (int i = 0; i < 26; i++) tab[order[i] - 'a'] = i; // 用整数来表示字符的大小
    for (int i = 1; i < wordsSize; ++i) {
        if (!str_cmp(words[i - 1], words[i])) return 0;
    }
    return 1;
}


// bool isAlienSorted(char** word,int wordSize,char* order) {
//     for (int i=0;i<strlen(order);++i) {
//         m[order[i]] = i;
//     }
//     int cols =100;
//     char (*tmp)[wordSize];
//     for (int i=0;i<wordSize;++i) {
//         tmp[i] = word[i];
//         printf("%s\n",tmp[i]);
//     }
//     qsort(word,wordSize,sizeof(word[0]), cmp);
//     for (int i=0;i<wordSize;++i) {
//         printf("%s\n",tmp[i]);
//     }
//     return true;
// }

int main(int argc, char const *argv[])
{
    /* code */
    int wordSize = 3;
    char *word[]= {"w","b","v"};
    char order[] = "worldabcefghijkmnpqstuvxyz";
    bool res = isAlienSorted(word, wordSize, order);
    printf("%d\n",res);
    return 0;
}
