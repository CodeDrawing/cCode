#include <stdio.h>
#include <stdlib.h>
//构造链表节点类型
typedef int data_t;

typedef struct node_t{
    data_t data;  //数据域
    struct node_t *next; //next 域
}linklist;

linklist* create_linklist();

int linklist_is_empty(linklist* head);
int get_num_linklist(linklist* head);
int insert_head_linklist(linklist* head, data_t val);
void show(linklist* head);
int insert_by_pos_linklist(linklist *head, int pos, data_t val);
int change_by_pos_linklist(linklist*head, int pos, data_t new_val);
data_t find_by_pos_linklist(linklist*head, int pos);
int delete_by_pos_linklist(linklist* head, int pos);
int destory_linklist(linklist** head);
int clear_linklist(linklist* head);
int insert_tail_linklist(linklist *head,data_t data);

linklist* merge(linklist* list_one,linklist* list_two){
    linklist * newlist=create_linklist();
    linklist *tail=newlist;
    list_one=list_one->next;
    list_two=list_two->next;
    while(list_one&&list_two){
        if(list_one->data <= list_two->data){
            tail->next=list_one;
            list_one=list_one->next;
            tail=tail->next;
        }else{
            tail->next=list_two;
            list_two=list_two->next;
            tail=tail->next;
        }
        if(list_one==NULL){
            tail->next=list_two;
            return newlist;
        }else if(list_two == NULL){
            tail->next=list_one;
            return newlist;
        }
    }
}

int main(int argc, char *argv[])
{
    int a[]={1,3,5,7,9,10};
    int b[]={2,4,5,8,11,15};

    linklist* list_one = create_linklist();
    linklist* list_two = create_linklist();
    for(int i=0;i<6;i++){
        insert_tail_linklist(list_one,a[i]);
        insert_tail_linklist(list_two,b[i]);
    }
    printf("list_one:");
    show(list_one);
    printf("list_two:");
    show(list_two);
    linklist * head = merge(list_one,list_two);
    show(head);
    return 0;
}


//创建链表头节点
linklist* create_linklist()
{
    linklist* head = (linklist*) malloc(sizeof(linklist));
    if(NULL == head) return NULL;
    head->data = -1;
    head->next = NULL;
    return head;
}

//判空
int linklist_is_empty(linklist* head)
{
    if(NULL == head) return -1;
    return ((head->next == NULL) ?1:0);
}
//求有效节点个数(求长度)
int get_num_linklist(linklist* head)
{
    if(NULL == head) return -1;
    linklist *p = head->next; //定义p指针指向第一个有效节点
    int num = 0;
    while(p != NULL)  //循环遍历
    {
        num++;              //统计节点数
        p = p->next;        //p指针向后偏移
    }
    return num;
}
//头插法
int insert_head_linklist(linklist* head, data_t val)
{
    if(NULL == head) return -1;
    //准备new 节点
    linklist *new  = (linklist *)malloc(sizeof(linklist));
    new->data = val; //
    new->next = NULL;
    //头插法 插入
    new->next = head->next;
    head->next = new;
    return 0;
}

//按位置插入
int insert_by_pos_linklist(linklist *head, int pos, data_t val)
{
    if(NULL == head) return -1;
    //判断位置合法性
    int len = get_num_linklist(head);
    if(pos < 0 || pos > len) return -1;
    //准备new 节点 和p 指针
    linklist* p = head;
    linklist* new = (linklist*)malloc(sizeof(linklist));
    new->data = val;
    new->next = NULL;
    //将p 找到pos-1的位置
    while(pos--)
        p = p->next;
    //将新节点插入pos 位置
    new->next = p->next;
    p->next   = new;
    return 0;
}

//按位置修改
int change_by_pos_linklist(linklist*head, int pos, data_t new_val)
{
    if(NULL == head) return -1;
    if(linklist_is_empty(head)== 1) return -1;
    //判断位置合法性
    int len = get_num_linklist(head);
    if(pos < 0 || pos > len-1) return -1;
    linklist* p = head->next;
    //找到pos 位置
    while(pos--)
        p   = p->next;
    p->data = new_val;  //修改
    return 0;
}
//
//按位置查询
data_t find_by_pos_linklist(linklist*head, int pos)
{
    if(NULL == head) return -1;
    if(linklist_is_empty(head)== 1) return -1;
    //判断位置合法性
    int len = get_num_linklist(head);
    if(pos < 0 || pos > len-1) return -1;
    linklist* p = head->next;
    //找到pos 位置
    while(pos--)
        p = p->next;
    return p->data;
}
//按位置删除
int delete_by_pos_linklist(linklist* head, int pos)
{
    if(NULL == head) return -1;
    if(linklist_is_empty(head)== 1) return -1;
    //判断位置合法性
    int len = get_num_linklist(head);
    if(pos < 0 || pos > len-1) return -1;
    //准备p 指向pos-1， q 指向要删除的pos 节点
    linklist* p = head;
    linklist* q = NULL;
    //找到pos -1位置
    while(pos--)
        p = p->next;
    q = p->next;
    //连接
    p->next = q->next;
    //删除节点
    free(q);
    q = NULL; //
    return 0;
}


//打印有效节点的值
void show(linklist* head)
{
    if(NULL == head) return;
    linklist *p = head->next;
    while(p != NULL)
    {
        printf("%-4d",p->data);
        p = p->next;
    }
    printf("\n");
    return;
}
//清空链表
int clear_linklist(linklist* head)
{
    if(NULL == head) return -1;
    linklist *p = head->next;
    head->next = NULL;
    linklist* q = NULL;
    while(p != NULL)
    {
        q = p->next; //q 偏移
        free(p);
        p = q;  //p 向后偏移
    }
    return 0;
}
//销毁链表

int destory_linklist(linklist** head)
{
    free(*head);
    head = NULL;
    return 0;
}
// 命令行模式下：gg=GG 自动缩进

//尾插法
int insert_tail_linklist(linklist *head,data_t data){
    linklist * tail =head;
    while(tail->next!=NULL){
        tail=tail->next;
    }

    linklist * new =malloc(sizeof(linklist));
    new->data=data;
    new->next=NULL;
    tail->next=new;
    return 1;
}