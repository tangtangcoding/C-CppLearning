#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);
    char ch[1];
    fgets(ch, 1000, stdin);
    int n = 0;
    pri n
    for (int i=0;i<1000;++i) {
        if (s[i] == ch[0]) {
            ++n;
        }
    }
    printf("%d\n",n);
    return 0;
}