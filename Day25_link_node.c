#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
typedef struct LinkNode {
    int val;
    struct LinkNode *next;
}linkNode;
//判断是否为空
int check_is_null(linkNode *head){
    if(head->next==NULL) return -1;
    return 0;
}
//创建头节点(新建链表)
linkNode * create_link(){
    linkNode *head=(linkNode *) malloc(sizeof (linkNode));
    head->next=NULL;
    head->val=-1;
    return head;
}

//增加节点（从头开始）
linkNode *create_node_from_head(linkNode *head, int val) {
    linkNode *node=(linkNode*) malloc(sizeof (linkNode));
    node->val=val;
    if(head->next==NULL){
        head->next=node;
        node->next=NULL;
    }else{
        node->next=head->next;
        head->next=node;
    }
    return head;
}

//根据位置删除节点
int delete_node_by_position( linkNode *head,int pos){
    if(head->next==NULL) return -1;
    if(pos<=0) return -1;
    for (int i = 0; i < pos-1; ++i) {
        head=head->next;
    }

    head->next=head->next->next;
    return 1;
}
//根据值删除节点
linkNode*  delete_node_by_value(linkNode *head,int val){
    if(head->next==NULL) return head;
    if(head->val==val){
        head= delete_node_by_value(head->next,val);
        return head;
    }else{
        head->next= delete_node_by_value(head->next,val);
        return head;
    }
}
//根据位置查找值
int find_value_by_position(linkNode* head,int pos){
    if(head->next==NULL) return -1;
    if(pos<=0) return -1;
    for (int i = 0; i < pos-1; ++i) {
        head=head->next;
    }
    return head->next->val;
}
//从中间插入节点
int insert_node(linkNode * head,int val,int pos){
    if(head->next==NULL) return -1;
    if(pos<=0) return -1;

    linkNode *node= (linkNode*) malloc(sizeof (linkNode));
    node->val=val;
    for (int i = 0; i < pos-1; ++i) {
        head=head->next;
    }
    node->next=head->next;
    head->next=node;
    return 1;
}
//反转链表
struct ListNode *reverseList(linkNode *head) {
    linkNode*current = head;
    linkNode *pre_node = NULL;

//    struct ListNode *next=current->next;
    struct ListNode *next = NULL;

    while (current) {

        next = current->next;
        current->next = pre_node;
        pre_node = current;
        current = next;

    }
    return pre_node;
}

//打印链表
void print_list(linkNode *head) {
    if (head->next == NULL) return;
    while (head->next) {
        head = head->next;
        printf("%-3d ", head->val);
    }
}

int main() {
    int result=0;
    linkNode * head=create_link();
    for (int i = 0; i < 10; ++i) {
        create_node_from_head(head,i);
    }
    create_node_from_head(head,6);
    print_list(head);
    printf("\n");
    printf("create complete!\n");
    result=find_value_by_position(head,1);
    printf("result = %d\n",result);

    printf("delete node by position\n");
    delete_node_by_position(head,11);
    print_list(head);

//    insert_node(head,55,10);
//    print_list(head);

//    delete_node_by_value(head,11);
//    print_list(head);

    return 0;
}

