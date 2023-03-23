//
// Created by 84539 on 2023/3/23.
//
#ifndef _LINKLIST_H
#define _LINKLIST_H
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
#endif