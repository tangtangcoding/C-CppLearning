#include <stdio.h>

int main() {
    char c[5001]={0};
    fgets(c, sizeof(c), stdin);
    int j;
    for (;i<5001;++i) {
        if (c[i]==' ') {
            if (i + 1 != ' ') {
                j = i;
            } else {
                break;
            }
        }
    }
    printf("%d\n",i - j + 1);
    return 0;
}