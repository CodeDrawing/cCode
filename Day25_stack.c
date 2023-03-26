#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct stake{
    int val;
    struct stake* next;
}Stake;
//新建栈
Stake * create_stake(){
    Stake* stake=(Stake *)malloc(sizeof(Stake));
    stake->next=NULL;
    return stake;
}
//入栈
void put_stake(Stake * stake,int val){
    Stake* element=(Stake *)malloc(sizeof(Stake));
    while(stake->next!=NULL){
        stake=stake->next;
    }
    element->val=val;
    stake->next=element;
    element->next=NULL;
}
//出栈
void pull_stake(Stake * stake){
    Stake* pre=(Stake *)malloc(sizeof(Stake));
    while (stake->next!=NULL){
        pre=stake;
        stake=stake->next;
    }
    printf("%d ",stake->val);
    pre->next=NULL;
    free(stake);
    stake=NULL;
}

//打印
void print_stake(Stake * stake){
    while(stake->next!=NULL){
        stake=stake->next;
        printf("%d ",stake->val);

    }
}

int main(){
Stake * stake=create_stake();
    put_stake(stake,55);
    put_stake(stake,45);
    put_stake(stake,25);
    print_stake(stake);
    printf("==\n");
    pull_stake(stake);
    pull_stake(stake);
}

