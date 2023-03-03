#include "stdio.h"

typedef struct {
    int index;
    int val;
} KeyVal;

int cmp(const void* e1, const void* e2) {
    return ((KeyVal*)e1)->index - ((KeyVal*)e2)->index; 
}

int main() {
    int n;

    while (scanf("%d", &n) != EOF) {
        KeyVal tmp[n], t;
        int i, j;

        for (i = 0; i < n; i++)
            scanf("%d %d", &tmp[i].index, &tmp[i].val);
        
        qsort(tmp, sizeof(tmp)/sizeof(tmp[0]), sizeof(tmp[0]),cmp);

        int a = tmp[0]
        for (i = 0; i<n;++i) {

        }
        
    }
}

