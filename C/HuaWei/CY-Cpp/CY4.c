#include <ctype.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static int Calc(const char *input) {
  int size = strlen(input);
  int *s = (int *)malloc(sizeof(int) * size);
  int cur = 0;
  int a, b = 0;
  for (int i = 0; i < strlen(input); ++i) {
    if (input[i] == '\0') break;
    if (!isdigit(input[i])) {
      a = s[cur - 2] ;
      b = s[cur - 1];
      if (input[i] == '+') {
        s[cur - 2] = a + b;l
      } else if (input[i] == '-') {
        s[cur - 2] = a - b;
      } else if (input[i] == '*') {
        s[cur - 2] = a * b;
      } else if (input[i] == '/') {
        s[cur - 2] = a / b;
      }
      s[cur - 1] = 0;
      cur--;
    } else {
      s[cur++] = input[i] - '0';
    }
  }
  return s[0];
}

int main() {
    char s[] = {'9','3','5','-','2','*','+'};
    int ans = Calc(s);
    printf("%d ",ans);
}