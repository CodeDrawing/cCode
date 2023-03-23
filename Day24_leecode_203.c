#include <stdio.h>
#include <string.h>
typedef struct linkNode {
    int val;
    struct LinkNode *next;
}linkNode;
struct ListNode* removeElements(struct linkNode* head, int val){

    if(head==NULL){
        return NULL;
    }else if(head->val==val){
        head=removeElements(head->next,val);
        return head;
    }else{
        head->next=removeElements(head->next,val);
        return head;
    }

}
int main(){

}

