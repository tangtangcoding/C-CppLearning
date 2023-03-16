/*
 * @Author: James jamesxh@foxmail.com
 * @Date: 2023-03-13 02:21:15
 * @LastEditors: James jamesxh@foxmail.com
 * @LastEditTime: 2023-03-13 06:51:27
 * @FilePath: /C-CppLearning/C/lk/14/14.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <string.h>

char * longestCommonPrefix(char ** strs, int strsSize){
    char str[201];
    memset(str,' ',sizeof(char) * 201);
    int offset = 200;
    char dest[201] = {0};
    for (int i=0;i<strsSize;++i) {
        int size = 0;
        int j = 0;
        for (;j<strlen(strs[i]);++j) {
            if (str[j] == ' ') {
                str[j] = strs[i][j];
                continue;
            }else if (str[j] == strs[i][j]) {
                size++;
            } else if (str[j] != strs[i][j]) {
                break;
            }
        }
        printf("%s\n",str);
        if (size < offset) {
            offset = size;
            strncpy(dest, strs[i], offset);
            //printf("%d\n",size);
        }
       
    }
    return dest;
}

int main(int argc, char const *argv[])
{
    /* code */
    // char *s = "flower";
    // printf("%s\n",s);
    // char tmp[6];
    // strncpy(tmp,s,3);
    // tmp[3] = '\0';
    // printf("%s\n",tmp);
    int s,A;
    printf("%d %d",s,A);
    return 0;
}
