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
//按位置删除链表
int delete_element_by_position(list *head,int pos){
    if(NULL==head) return -1;
    if(pos-1>head->last||pos<0) return -1;
    for (int i = pos-1; i <= head->last; ++i) {
        head->data[i]=head->data[i+1];
    }
    return 1;
}
//按位置修改链表数据
int update_element_by_position(list *head,int pos,list_val val){
    if(NULL==head) return -1;
    if(pos-1<=0||pos-1>head->last) return -1;
    head->data[pos-1]=val;
    return 1;
}
//查询
int query_element_by_position(list *head,int pos){
    if(NULL==head) return -1;
    if(pos-1<0||pos-1>head->last) return -1;
    return head->data[pos-1];
}
//报错函数
void error_function(char *a,int line){
    printf("%s",a);
}
//排序（选择排序）
void sort_list(list *head){
    int min;
    int temp;
    int flag=-1;
    for (int i = 0; i <= head->last; ++i) {
        min=head->data[i];
        temp=0;
        for (int j = i; j <= head->last ; ++j) {
            if(min>head->data[j]){
                min=head->data[j];
                temp=j;
                flag=1;
            }
        }
        if(flag==1){
            head->data[temp]=head->data[i];
            head->data[i]=min;
            flag=-1;
        }

    }
}

//查找元素位置
int query_element_by_value(list *head,list_val val){
    if(NULL==head) return -1;
    for (int i = 0; i <=head->last; ++i) {
        if(head->data[i]==val){
            return i+1;
        }
    }
    return -1;//没找到
}

//打印链表
void print_list(list *head){
    for (int i = 0; i <= head->last; ++i) {
        printf("%d ",head->data[i]);
    }
}
int main(){


    error_function(__func__,__LINE__);

    list* head=create_list();
    print_list(head);

    insert_element_by_position(head,0,3);
    insert_element_by_position(head,1,1);
    insert_element_by_position(head,2,6);
    insert_element_by_position(head,2,5);
    print_list(head);
    printf("\n");

    //测试删除
//    delete_element_by_position(head,1);
//    delete_element_by_position(head,1);
//    print_list(head);
//    printf("\n");

//测试查询
//    int query=query_element_by_position(head,3);
//    printf("%d\n",query);

    //测试查找
//    int query=query_element_by_value(head,6);
//    printf("%d\n",query);

//测试排序
    sort_list(head);
    print_list(head);
    return 0;
}

