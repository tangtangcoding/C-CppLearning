#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    // char str[5001] = {0};
    // int length = 0;
    // char *p = NULL;
    // fgets(str,sizeof(str),stdin);
    // p = strrchr(str,' ');
    // printf("%s %s",&str,&p);
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to 
        printf("%d\n", a + b);
    }
    return 0;
    return 0;
}
