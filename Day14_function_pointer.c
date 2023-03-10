#include <stdio.h>

int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int arithmetic(int a,int b,int function);
int main(){
    int a=50,b=30,result=0;
    printf("%d ",arithmetic(a,b,1));
}
int arithmetic(int a,int b,int function){
    int (*p)(int a,int b);
    int result=0;
    if(function==1){
        p=add;
        result=(*p)(a,b);
    }else if(function==2){
        p=sub;
        result=(*p)(a,b);
    }else if(function==3){
        p=mul;
        result=(*p)(a,b);
    }else if(function==4){
        p=div;
        result=(*p)(a,b);
    }
    return result;
}
int add(int a,int b){
    int result=0;
    result=a+b;
    return result;
};
int sub(int a,int b){
    int result=0;
    result=a-b;
    return result;
};
int mul(int a,int b){
    int result=0;
    result=a*b;
    return result;
};
int div(int a,int b){
    int result=0;
    result=a/b;
    return result;
};