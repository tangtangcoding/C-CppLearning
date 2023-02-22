/*
 * @Author: James jamesxh@foxmail.com
 * @Date: 2023-02-22 01:03:13
 * @LastEditors: James jamesxh@foxmail.com
 * @LastEditTime: 2023-02-22 03:14:55
 * @FilePath: /C-CppLearning/C/NiuKe_HJ/HJ2/hj2.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <string.h>
#define SIZE 1000
int main() {
    char str[SIZE] = {0};
    fgets(str,SIZE,stdin);
    char ch = 0;
    scanf("%c\n",&ch);
    int n = 0;
    for (int i=0;i<strlen(str);++i) {
        char c = str[i];
        if (c >= '0' && c <= '9' && c == ch) {
            n++;
        } else if (c >= 'A' && c <= 'Z') {
            if (c == ch || c - 32 == ch) {
                n++;
            } 
        } else if (c >= 'a' && c <= 'z') {
            if (c == ch || c + 32 == ch) {
                n++;
            }
        }
    }
    printf("%d\n",n);
}