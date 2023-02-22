#include <stdio.h>
#include <string.h>
#define SIZE 1000
int main() {
    char str[SIZE];
    scanf("%[^\n]\n",&str);
    char ch;
    scanf("%c\n",&ch);
    int n = 0;
    for (int i=0;i<strlen(str);++i) {
        char c = str[i];
        if (c >= '0' && c <= '9' && c == ch) {
            n++;
        } else if (c >= 'A' && c <= 'Z') {
            if (c == ch || c - 32 == ch) {
                n++;
            } 
        } else if (c >= 'a' && c <= 'z') {
            if (c == ch || c + 32 == ch) {
                n++;
            }
        }
    }
    printf("%d\n",n);
}