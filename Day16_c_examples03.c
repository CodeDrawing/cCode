//
// Created by 84539 on 2023/3/13.
//
#include  <stdio.h>
#include <math.h>
int main(){
int a=0,flag=0;
    for (int i = 1; i < 1000; ++i) {
        flag=0;
            for (int k = 0; k <= sqrt(i+100); ++k) {
                if(k*k==i){
                    flag++;
                };
        }
        for (int j = 0; j < sqrt(i+268); ++j) {
            if(j*j==i){
                flag++;
            }
        }
        if(flag==2){
            printf("%d is result\n",i);
        };
    }
}