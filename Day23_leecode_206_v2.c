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
//迭代
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *current=head;
    struct ListNode *pre=NULL;
    while (current){
        struct ListNode *temp=current->next;
        current->next=pre;
        pre=current;
        current=temp;
    }
    return pre;
}
//递归

struct ListNode* reverseListVTwo(struct ListNode* head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    struct ListNode* newHead= reverseListVTwo(head->next);
    head->next->next=head;
    head->next=NULL;
    return newHead;

//    if (head == NULL || head->next == NULL) {
//        return head;
//    }
//    struct ListNode* newHead = reverseListVTwo(head->next);
//    head->next->next = head;
//    head->next = NULL;
//    return newHead;


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
    struct ListNode * reversNode=reverseListVTwo(newNode);
    printList(reversNode);
    return 0;
}

