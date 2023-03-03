#include <stdio.h>
#include <math.h>
int main() {
    int n = 0;
    scanf("%d\n",&n);
    int v[10] = {0};
    int cnt = 0;
    int ans = 0;
    char str[9] = {0};
    if (n == 0) {
        printf("%d\n",n);
    } else {
        while (n != 0) {
            int res = n % 10;
            n /= 10;
            if (v[res]==0) {
                str[cnt++] = res;
                v[res] = 1;
            } 
        }
        printf("%s\n",cnt);
    }
    return 0;
}