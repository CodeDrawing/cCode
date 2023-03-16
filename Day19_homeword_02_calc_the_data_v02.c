#include <stdio.h>
struct data{
    int year;
    int month;
    int day;
};
int main(){
    struct data data;
    int result=0;
    int flag=0;
    printf("please input year-month-day\n");
    scanf("%d-%d-%d",&data.year,&data.month,&data.day);
    int arr[]={31,0,31,30,31,30,31,31,30,31,30,31};
    //判断闰年或者平年
    if(data.year%400==0||(data.year%4==0&&data.year%100!=0)){
        flag=1;
    }
    for (int i = 0; i < data.month-1; ++i) {
        if(i==1){
            if(flag==0){
                result = result+28;
            } else{
                result = result+29;
            }
        }else{
            result= result+arr[i];
        }
    }
    result=result+data.day;
    printf("%d\n",result);
}

