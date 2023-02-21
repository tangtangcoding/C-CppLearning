/*
 * @Author: James jamesxh@foxmail.com
 * @Date: 2023-02-21 01:43:44
 * @LastEditors: James jamesxh@foxmail.com
 * @LastEditTime: 2023-02-21 01:43:49
 * @FilePath: /C-CppLearning/C/NiuKe_HJ/HJ1.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to 
        printf("%d\n", a + b);
    }
    return 0;
}