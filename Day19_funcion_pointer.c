#include <stdio.h>
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a * b;
}
int div(int a,int b){
    return a / b;
}
int calc(int a,int b,int(*p)()){
    return p(a,b);
}
int main(){
int a=21,b=7;
    printf("result = %d",calc(a,b,sub));

}
