#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
7、统计无重复字符子串
*/
static int m[27] = {0};
char result[26];
int size = 0;
// 动态字符串数组
void Print() {
    for (int j=0;j<size;++j) {
        printf("%c",result[j]);
    }
    printf("\n");
}



void dfs(char *str,int i) {
    Print();
    if (i == strlen(str)) {
        return;
    }
    for (int start=i;start<strlen(str);++start) {
        char c = str[start];
        if (m[c-'a'] == 1) {
            continue;
        }
        m[c-'a'] = 1;
        result[size++] = c;
        dfs(str,start+1);
        m[c-'a'] = 0;
        result[--size] = '\0';
    }
}
int GetCountOfSubString(char *str)
{
    dfs(str,0);
    return -1;
}


int main() {
    char str[] = "xbmxbnh";
    char *s = str;
    int ans = GetCountOfSubString(s);
    return 0;
}