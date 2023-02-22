/*
 * @Author: James jamesxh@foxmail.com
 * @Date: 2023-02-22 01:03:13
 * @LastEditors: James jamesxh@foxmail.com
 * @LastEditTime: 2023-02-22 01:05:50
 * @FilePath: /C-CppLearning/C/NiuKe_HJ/HJ2/hj2.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);
    char ch;
    scanf("%c",&ch);
    printf("%c",ch);
    return 0;
}