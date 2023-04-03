#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int BinaryToDecimal(char *binaryString) 
{
    int size = strlen(binaryString);
    int num = 0;
    int step = 0;
    for (int i = size - 1;i>=0;--i) {
        if (binaryString[i] == '1') {
            int add =  pow(2, size - i - 1);
            num += add;
            printf("%d\n",add);
        }
    }
    return size;
}

int main() {
    char *s = (char*) malloc(sizeof(char) * 6);
    strcpy(s, "00011");
    int n = BinaryToDecimal(s);
    printf("%d ",n);
}