#include <stdio.h>
#define SIZE 5001

int main() {
    char c[SIZE];
    int i = 0;
    int j = 0;
    while (scanf("%s", &c) != EOF) { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to 
        if (c == ' ') {
            i = j;
        }
        j++;
    }
    printf("%d",j - i + 1);
    return 0;
}