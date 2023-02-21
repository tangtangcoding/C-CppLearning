#include<stdio.h>
int main(int argc, char const *argv[])
{
    char in[5001];
    while ( scanf("%s") != EOF) {
        printf("%s\n",in);
        printf("%d\n",sizeof(in));
    }
    return;
}
