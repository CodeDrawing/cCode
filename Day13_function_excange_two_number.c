#include <stdio.h>

int get_all_sum(int a[],int length);

int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10},length=10;
    int result=get_all_sum(a,length);
    printf("result = %d",result);
}
int get_all_sum(int a[],int length){\
    int sum=0;
    for (int i = 0; i <length; ++i) {
        sum+=a[i];
    }
    return sum;
}
