#include <stdio.h>

int main() {
    char c[5001]={0};
    fgets(c, sizeof(c), stdin);
    printf("size %d",sizeof(c));
    return 0;
}