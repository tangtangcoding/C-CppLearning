#include<stdio.h>
int main(int argc, char const *argv[])
{
    char in[5001];
    int i
    while ( scanf("%s",&in) != EOF) {
        printf("%s\n",in);
        printf("%d\n",sizeof(in));
    }
    return;
}
