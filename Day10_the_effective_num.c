//
// Created by 84539 on 2023/3/3.
//
#include <stdio.h>

int countChar(char a[]){

    int count=0;
    while(a[count]!='\0'){
        count++;

    }

    return count;
}

void exchange(char a[],int length){
    int left=0,right=length-1;
    char temp;
    while (left<=right){
        temp=a[left];
        a[left]=a[right];
        a[right]=temp;
        left++;
        right--;
    }
}

int main(){
    char a[100];
    printf("Please input a string\n");
    scanf("%s",&a);
    int count=countChar(a);
    printf("effective numbers is %d\n",count);
    exchange(a,count);
    printf("exchange result is %s\n",a);

    return 0;

}