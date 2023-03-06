#include <stdio.h> 
#include <stdlib.h>
#include <string.h>


int cmp(const char a[], const char b[]) {
    return strcmp(a, b); 
}

int main() {
    int n;
    scanf("%d\n",&n);
    char str[n][101];
    for (int i=0;i<n;++i) {
        scanf("%s\n", &str[i]);
    }
    qsort(str, n, 101, cmp);
    for (int i=0; i<n; ++i) {
        printf("%s\n",str[i]);
    }
  
    return 0;
}