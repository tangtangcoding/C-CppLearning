#include "stdio.h"

typedef struct {
    int index;
    int val;
} KeyVal;

int cmp(const void* e1, const void* e2) {
    return 
}

int main() {
    int n;

    while (scanf("%d", &n) != EOF) {
        KeyVal tmp[n], t;
        int i, j;

        for (i = 0; i < n; i++)
            scanf("%d %d", &tmp[i].index, &tmp[i].val);

        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                if (tmp[i].index == tmp[j].index) {
                    tmp[i].val += tmp[j].val;
                    for (int k = j; k < n; k++)
                        tmp[k] = tmp[k + 1];
                    j--;
                    n--;
                }
            }
        }

        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                if (tmp[i].index > tmp[j].index) {
                    t = tmp[i];
                    tmp[i] = tmp[j];
                    tmp[j] = t;
                }
            }
        }

        for (i = 0; i < n; i++)
            printf("%d %d\n", tmp[i].index, tmp[i].val);
    }
}

