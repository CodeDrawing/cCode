//
// Created by 84539 on 2023/3/13.
//
#include  <stdio.h>
#include <math.h>
int main(){
int a[10]={1,2,3,4,5,6,7,8,9,10};
int m=0,final=0;
    printf("please input a number :\n");
scanf("%d",&m);
    for (int i = 0; i < m; ++i) {
        final=a[9];
        for (int j = 9; j >= 1; j--) {
            a[j]=a[j-1];
        }
        a[0]=final;
    }
    printf("result is=");
    for (int i = 0; i < 10; ++i) {
        printf("%d ",a[i]);
    }
return 0;
}