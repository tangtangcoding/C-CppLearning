#include<stdio.h>
int main(int argc, char const *argv[])
{
    char in[5001];
    int l,r;
    while ( scanf("%s",&in) != EOF) {
        if (in[r] == ' ') {
            l = r;
        }
        r++;
    }
    printf("%d %d",&l,&r);
    return 0;
}
