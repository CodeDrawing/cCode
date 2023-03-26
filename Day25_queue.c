#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct queue {
    int val;
    struct queue *next;
} Queue;

//新建队列
Queue *create_Queue() {
    Queue *queue = (Queue *) malloc(sizeof(Queue));
    queue->next = NULL;
    return queue;
}

//入
void in_queue(Queue *queue, int val) {
    Queue *element = (Queue *) malloc(sizeof(Queue));
    while (queue->next != NULL) {
        queue = queue->next;
    }
    element->val = val;
    queue->next = element;
    element->next = NULL;
}

//出
int out_queue(Queue *queue) {
    if (queue->next == NULL) { return -1; }
    Queue *element = (Queue *) malloc(sizeof(Queue));
    element = queue->next;
    queue->next = queue->next->next;
    return element->val;
}

//打印
void print_Queue(Queue *queue) {
    while (queue->next != NULL) {
        queue = queue->next;
        printf("%d ", queue->val);

    }
}

int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes) {
    Queue *queue = create_Queue();
    // int (*matrix)[r]=(int *)malloc(sizeof(int)*c);

    for (int i = 0; i < matSize; i++) {
        for (int j = 0; j < *matColSize; j++) {
            in_queue(queue, *(*(mat + i) + j));
        }
    }
    for (int i = 0; i < r; i++) {
        returnSize++;
        for (int j = 0; i < c; j++) {
            *returnColumnSizes[i]++;
            *(*(mat + i) + j) = out_queue(queue);

        }
    }
}

int main() {
    int a[2][2]= {{1, 2}, {3, 4}};
    int **result=NULL;
    int mColSize=2;
    int *matColSize=&mColSize;
    result = matrixReshape(a,2,matColSize,1,4);
    for (int i = 0; i < 1; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%d ",*(*(result+i)+j));
        }
    }
//    print_Queue(Queue);
//    printf("\n");
//    printf("%d\n", out_queue(Queue));
//    printf("%d\n", out_queue(Queue));
//    printf("%d\n", out_queue(Queue));
//    printf("%d\n", out_queue(Queue));

}

