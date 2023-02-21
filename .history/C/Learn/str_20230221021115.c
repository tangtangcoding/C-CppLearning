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
    char *msg = "string";
    printf("size %s\n",msg);
    printf("%d",strlen(msg));
    return 0;
}
