/*
 * @Author: James jamesxh@foxmail.com
 * @Date: 2023-03-03 07:23:30
 * @LastEditors: James jamesxh@foxmail.com
 * @LastEditTime: 2023-03-03 07:23:35
 * @FilePath: /C-CppLearning/C/NiuKe_HJ/HJ9/hj9.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <math.h>
int main() {
    int n = 0;
    scanf("%d\n",&n);
    int v[10] = {0};
    int cnt = 0;
    int ans = 0;
    char str[9] = {0};
    if (n == 0) {
        printf("%d\n",n);
    } else {
        while (n != 0) {
            int res = n % 10;
            n /= 10;
            if (v[res]==0) {
                str[cnt++] = res;
                v[res] = 1;
            } 
        }
        printf("%s\n",cnt);
    }
    return 0;
}