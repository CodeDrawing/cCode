#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct MyHashSet {
    int key;
    struct MyHashSet *next;
} MyHashSet;


MyHashSet *myHashSetCreate() {
    MyHashSet *hashSet = (MyHashSet *) malloc(sizeof(MyHashSet));
    hashSet->next = NULL;
    hashSet->key = -1;
    return hashSet;
}

void myHashSetAdd(MyHashSet *obj, int key) {
    if (obj->next == NULL) {
        MyHashSet *new_node = (MyHashSet *) malloc(sizeof(MyHashSet));
        new_node->key = key;
        obj->next = new_node;
        new_node->next = NULL;
        return;
    }
    while (obj->next != NULL) {
        if (obj->key == key) {
            return;
        }
        obj = obj->next;
    }
    if (obj->next == NULL) {
        if (obj->key != key) {
            MyHashSet *new_node = (MyHashSet *) malloc(sizeof(MyHashSet));
            new_node->key = key;
            obj->next = new_node;
            new_node->next = NULL;
        }
    }
}

void myHashSetRemove(MyHashSet *obj, int key) {
    if (obj->next == NULL) {
        return;
    }
    MyHashSet *pre_node = (MyHashSet *) malloc(sizeof(MyHashSet));
    pre_node = NULL;
    while (obj->next != NULL) {

        if (NULL != obj->next->next) {
            if (obj->next->key == key) {
                obj->next = obj->next->next;
            }
        }
        if (obj->key == key) {

            pre_node->next = NULL;
        }
        pre_node=obj;
        obj = obj->next;

    }
    if (obj->key == key) {
        printf("++++\n");
        pre_node->next = NULL;
    }
}


bool myHashSetContains(MyHashSet *obj, int key) {
    if (obj->next== NULL) {
        return false;
    }
    while (obj->next != NULL) {
        if (obj->key == key) {
            return true;
        }
        obj = obj->next;
    }
    if(obj->key==key){
        return true;
    }else{

    }
    return false;
}

void myHashSetFree(MyHashSet *obj) {
    free(obj);
}

//打印链表
void print_list(MyHashSet *head) {
    if (head->next == NULL) return;
    while (head->next != NULL) {
        head = head->next;
        printf("%d ", head->key);
    }

}

int main() {
    MyHashSet *hashSet = myHashSetCreate();
    myHashSetAdd(hashSet, 1);
    myHashSetAdd(hashSet, 1);
    myHashSetAdd(hashSet, 1);
    myHashSetAdd(hashSet, 1);
    myHashSetAdd(hashSet, 10);
    myHashSetAdd(hashSet, 10);
    myHashSetAdd(hashSet, 15);
    print_list(hashSet);
    printf("%d\n",myHashSetContains(hashSet,15));
}

