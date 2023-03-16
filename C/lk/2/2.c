#include <stdio.h> 
#include <stdlib.h>
typedef struct ListNode {
    int val;
    struct ListNode *next;
}Node, *LinkedList;

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    Node* l = (Node*) malloc (sizeof(Node));
    Node* ans = l;
    int res = 0;
    int sum = 0;
    while (l1 && l2) {
        sum = l1->val + l2->val + res;
        sum %= 10;
        res /= 10;
        l->val = sum;
        l->next = (Node*) malloc (sizeof(Node));
        l = l->next;
        l1 = l1->next;
        l2 = l2->next;
    }

    while (l1) {
        sum = l1->val + res;
        sum %= 10;
        res /= 10;
        l->next = (Node*) malloc (sizeof(Node));
        l = l->next;
        l1 = l1->next;
    }

    while (l2) {
        sum = l2->val + res;
        sum %= 10;
        res /= 10;
        l->next = (Node*) malloc (sizeof(Node));
        l = l->next;
        l2 = l2->next;
    }

    return res;
}

int main(int argc, char const *argv[])
{
    /* code */
    Node* l = (Node*) malloc (sizeof(Node));
    if (l == NULL) {
        printf("error");
    }
    return 0;
}
