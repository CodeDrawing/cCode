#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct loop_link{
    int data;
    struct loop_link* next;
}Loop_link;
//创建循环链表
Loop_link *create_loop_link(){
    Loop_link * head=(Loop_link*)malloc(sizeof (Loop_link));
    head->data=-1;
    head->next=head;
    return head;
};
//计数
int count_node_uninclude_head(Loop_link*head){
    int count=0;
    Loop_link *p_head=head;
    while(p_head->next!=head){
        count++;
        p_head=p_head->next;
    }
    return count;

}
//从头添加节点
void insert_node_from_head(Loop_link *head,int data){
    Loop_link * node=(Loop_link*) malloc(sizeof (Loop_link));
    node->data=data;
    if(head->next==head){
        node->next=head;
        head->next=node;
    }else{
        node->next=head->next;
        head->next=node;
    }
}
//可以从最后一个点的前面插入的中间插入
void insert_node_from_position(Loop_link* head,int data,int pos){
    int length= count_node_uninclude_head(head);
    if(pos<=0||pos>length){
        printf("插入失败\n");
        return ;
    }
    Loop_link *p_head=head;
    for (int i = 0 ; i <pos-1 ; ++i) {
        p_head=p_head->next;
    }
    Loop_link * node=(Loop_link*) malloc(sizeof (Loop_link));
    node->data=data;
    node->next=p_head->next;
    p_head->next=node;
}
//打印链表
void print_loop_link(Loop_link* head){
    Loop_link *p_head=head->next;
    if(head->next==head){
        printf("0\n ");
        return ;
    }
    while(p_head!=head){
        printf("%5-d ",p_head->data);
        p_head=p_head->next;
    }
    printf("\n");
}

int main(){
    Loop_link *head=create_loop_link();
    int count=count_node_uninclude_head(head);
    printf("1111111111\n");
    printf("%d\n",count);
    print_loop_link(head);
    printf("1111111111\n");
    insert_node_from_head(head,10);
    insert_node_from_head(head,20);
    count=count_node_uninclude_head(head);
    printf("222222222222\n");
    printf("%d\n",count);
    print_loop_link(head);

    printf("3333333\n");
    insert_node_from_position(head,100,2);
    print_loop_link(head);
    printf("3333333\n");

}

