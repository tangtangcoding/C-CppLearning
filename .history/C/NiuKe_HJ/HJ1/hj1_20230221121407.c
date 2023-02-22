#include <stdio.h>
#include<string
int main() {
    char c[5001]={0};
    fgets(c, sizeof(c), stdin);
    
    printf("%d\n",strlen(c));
    return 0;
}