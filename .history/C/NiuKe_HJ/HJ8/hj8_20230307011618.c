/*
 * @Author: James jamesxh@foxmail.com
 * @Date: 2023-03-02 06:33:08
 * @LastEditors: James jamesxh@foxmail.com
 * @LastEditTime: 2023-03-02 06:33:12
 * @FilePath: /C-CppLearning/C/NiuKe_HJ/HJ8/hj8.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "stdio.h"

typedef struct {
    int index;
    int val;
} KeyVal;

int cmp(const void* e1, const void* e2) {
    return ((KeyVal*)e1)->index - ((KeyVal*)e2)->index; 
}

int main() {
    int n;
    qs
    while (scanf("%d", &n) != EOF) {
        KeyVal tmp[n], t;
        int i, j;

        for (i = 0; i < n; i++)
            scanf("%d %d", &tmp[i].index, &tmp[i].val);
        
        // 排序
        qsort(tmp, sizeof(tmp)/sizeof(tmp[0]), sizeof(tmp[0]),cmp);

        int a = tmp[0].index;
        int b = tmp[0].val;
        for (i = 1; i<n;++i) {
            if (a != tmp[i].index) {
                printf("%d %d\n",a,b);
                a = tmp[i].index;
                b = tmp[i].val;
            } else {
                b += tmp[i].val;
            }
        }
        printf("%d %d\n",a,b);
    }
}

