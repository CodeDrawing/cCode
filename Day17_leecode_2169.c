#include <stdio.h>
int countOperations(int num1, int num2){
    int i=0;
    while(1){

        if(num1>=num2){
            num1=num1-num2;
        }else{
            num2=num2-num1;
        }
        i++;
    }
    return i;
}
int main(){
    int num1=2,num2=3,result=0;
    result=countOperations(num1,num2);
    printf("%d \n",result);
}
