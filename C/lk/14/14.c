/*
 * @Author: James jamesxh@foxmail.com
 * @Date: 2023-03-13 02:21:15
 * @LastEditors: James jamesxh@foxmail.com
 * @LastEditTime: 2023-03-13 02:36:57
 * @FilePath: /C-CppLearning/C/lk/14/14.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

#include <stdio.h>
#include <string.h>

char * longestCommonPrefix(char ** strs, int strsSize){
    char str[201] = {'\0'};
    int offset = 200;
    char dest[201];
    for (int i=0;i<strsSize;++i) {
        char *s = strs[i];
        int size = 0;
        for (int j=0;j<strlen(s);++j) {
            if (str[j] == '\0') {
                str[j] = s[j];
            }
            if (str[j] == s[j]) {
                size++;
            }
        }
        offset = offset > size ? size : offset;
        strncpy(dest, s, offset);
    }
    return dest;
}

int main(int argc, char const *argv[])
{
    /* code */
    char **str  = {
        "flow","flower","flw","flera"
    };
    printf("%d %d",sizeof(str),strlen(str));
    
    //char *s = longestCommonPrefix(str,3);
    //printf("%s",s);
    return 0;
}
