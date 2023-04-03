#include <stdio.h>
#include <string.h>
#define x 5;
#define y x + 1;
#define z y * x / 2;
#define PT 3.5
#define S(X) PT * (X) * (X)
typedef struct {
    int a;
    int b;
    int c;
} TEST_STRU;


void test4() {
    int a = 1;
    int b = 2;
    printf("%g",S(a+b));
}
void test5() {
    TEST_STRU t1{1,2,3};
    TEST_STRU t2{1,2};
    printf("%d %d %d",t1.a,t1.b,t1.c);
     printf("%d %d %d",t2.a,t2.b,t2.c);
}
void func(int *a,int b[]) {
    b[0] = 6;
}
void test6() {
    int a,b[5];
    a=0;
    b[0]=3;
    func(&a,b);
    printf("%d\n",b[0]);
}
void test7() {
    char w1[] = {'h','e','l','\0'};
    char w2[] = "hel";
    printf("%d %d %d %d",sizeof(w1),sizeof(w2),strlen(w1),strlen(w2));
}
int main() {
    test7();
    return 0;
}