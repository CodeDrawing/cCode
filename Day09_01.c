//
// Created by 84539 on 2023/3/2.
//
#include "stdio.h"
int main(){
    int a[3][4]={{1,2,3,4},{55,6,7,8,},{9,10,11,12}};
    int max=0,i=0,temp;
    while(i<12){
        if(max<a[i%3][i%4]){
            max=a[i%3][i%4];
            temp=i;
            printf("%d\n",max);
        }
        i++;
    }
    printf("row is %d,col is %d",temp%3+1,temp%4+1);
    
    return 0;
}