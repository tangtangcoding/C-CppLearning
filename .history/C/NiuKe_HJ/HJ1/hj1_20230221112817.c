#include <stdio.h>

int main() {
    char c[5001]={0};
    fgets(c,sizeof(c), stdin);
    return 0;
}