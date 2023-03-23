#include <stdio.h>
#include <string.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2) {
    if (list1 == NULL) {
        return list2;
    } else if (list2 == NULL) {
        return list1;
    } else if (list1->val > list2->val) {
        list2->next = mergeTwoLists(list1, list2->next);
        return list2;
    } else {
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    }

}

int main() {

}

