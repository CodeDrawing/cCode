#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
typedef int list_val;
//定义结构体
typedef struct list{
    list_val data[SIZE];
    int last;
}list;
//创建表头以及初始化表
list* create_list(){
    list * head=(list *) malloc(sizeof (list));
    if(NULL==head){
        return NULL;
    }
    head->last=-1;
    memset(head,0,SIZE);
    return head;
}
//求表长
int get_list_length(list * head){
    if(NULL==head) return -1;
    return head->last+1;
}
//判断是否为空
int check_list_is_empty(list *head){
    if(NULL==head) return -1;
    return ((head->last<0)?1:0);
}
//判断是否已满
int check_list_is_full(list *head){
    if(NULL==head) return -1;
    return ((head->last+1>=SIZE)?1:0);
}
//按位置插入
int insert_element_by_position(list *head,int pos,list_val val){
    if(NULL==head) return -1;
    if(check_list_is_full(head)==-1) return -1;
    if(pos<0||pos>SIZE||pos>head->last+1) return -1;
    for (int i = head->last+1; i >pos ; i--) {
        head->data[i]=head->data[i-1];
    }
    head->data[pos]=val;
    head->last++;
    return 1;//1表示成功
}
//打印链表
void print_list(list *head){
    for (int i = 0; i <= head->last; ++i) {
        printf("%d ",head->data[i]);
    }
}
int main(){
    list* head=create_list();
    print_list(head);
    print_list("\n");
    insert_element_by_position(head,0,3);
    insert_element_by_position(head,1,1);
    insert_element_by_position(head,2,6);
    insert_element_by_position(head,2,0);
    print_list(head);
    print_list("\n");
    return 0;
}

