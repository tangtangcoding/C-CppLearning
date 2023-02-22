#include <stdio.h>

int main() {
    char c[5]={0};
    int i = 0;
    int j = 0;
    while (scanf("%s", c) != EOF) { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to 
        if (c[j] == ' ') {
            i = j;
        }
        j++;
    }
    printf("%d\n",j - i + 1);
    return 0;
}