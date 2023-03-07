//
// Created by 84539 on 2023/3/2.
//
#include "stdio.h"
#include "outputArray.h"
int main(){
    int a[10]={49,2,1,23,94,10,43,52,3,12};
    int temp;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 9; ++j) {
            if(a[j]<a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    output(a);
    return 0;
}