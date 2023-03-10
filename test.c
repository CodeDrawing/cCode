//
// Created by 84539 on 2023/3/9.
//
#include <stdio.h>
int test(int a,int b,int (*pFunc)(int m,int n));
int Plus(int a,int b);
int Minus(int ,int);
int main(){
    int x=5,y=8;
    int (* pFunc)(int a,int b);
    pFunc=Plus;
    printf("%d\n",(*pFunc)(x,y));
    pFunc=Minus;
    printf("%d\n",(*pFunc)(x,y));
    printf("%d\n",test(15,5,Plus));
    printf("%d\n",test(15,5,Minus));
    return 0;
}

int Plus(int a,int b){
    //简单的加法函数
    return (a+b);
}

int Minus(int a,int b){
    return (a-b);
};
//简单的减法函数
int test(int a,int b,int(*pFunc)(int m,int n)){
    return (*pFunc)(a,b);
}