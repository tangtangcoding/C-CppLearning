#include <stdio.h>

int main() {
    char* str = (char*)malloc(sizeof(char)*6);
    scanf("%s",&str);
    char ch;
    scanf("%c",&ch);
    int n = 0;
    // for (int i=0;i<1000;++i) {
    //     if (s[i] == ch[0]) {
    //         ++n;
    //     }
    // }
    printf("%d\n",n);
    return 0;
}