#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str = "1101";
    char *endptr;
    long int num = strtol(str, &endptr, 2);

    if (*endptr != '\0') {
        printf("Invalid input: %s\\\\\\\\n", str);
        return 1;
    }

    printf("Binary: ");
    for (int i = sizeof(long int) * 8 - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\\\\n");

    return 0;
}

