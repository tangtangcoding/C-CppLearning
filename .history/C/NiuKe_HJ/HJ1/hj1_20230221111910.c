#include <stdio.h>
int main() {
    char c;
    int i = 0;
    int j = 0;
    while (scanf("%c", &c) != EOF) { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to 
        if (c == ' ') {
            i = j;
        }
        j++;
    }
    prinft("%d",j - i + 1);
    return 0;
}