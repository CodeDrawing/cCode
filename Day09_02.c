//
// Created by 84539 on 2023/3/2.
//
#include "stdio.h"
int main(){
    int a[3][3]={{1,1,1},{1,1,1},{1,1,1}};
    int sum=0;
    for (int i = 0; i < 9; ++i) {
        if(!(i==1||i==2||i==5)){
            sum+=a[i%3][i%3];
        }

    }
    printf("%d\n",sum);
    return 0;
}