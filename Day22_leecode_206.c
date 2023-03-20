#include <stdio.h>
#include <stdlib.h>
// Definition for singly-linked list.
  struct ListNode {
      int val;
      struct ListNode *next;
};
void printList(struct ListNode* head) {
    struct ListNode* current = head;
    while (current != NULL) {
        printf("%d ", current->val);
        current = current->next;
    }
    printf("\n");
}
struct ListNode* current(struct ListNode* node,int i){
    struct ListNode *newNode= (struct ListNode*) malloc(sizeof (struct ListNode));
    newNode->next=node;
    newNode->val=i;

    return newNode;
}

struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *current=head;
    struct ListNode *pre_node=NULL;

//    struct ListNode *next=current->next;
    struct ListNode* next=NULL;

    while (current){
        /**
         *         printf("current = %p\n",current);
        printf("next = %p\n",next);
        printf("=============\n");
         */
        next=current->next;
        current->next=pre_node;
        pre_node=current;
        current=next;

    }
    return pre_node;
}

int main(){
struct ListNode *head= NULL;
    struct ListNode * newNode= current(head,0);
    for (int i = 1; i < 5; ++i) {
        newNode= current(newNode,i);
    }
    printf("finish construct\n");
    printList(newNode);
    printf("current completely\n");
    struct ListNode * reversNode=reverseList(newNode);
    printList(reversNode);
    return 0;
}

