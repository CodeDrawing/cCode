#include <stdio.h>

struct data{
    int year;
    int month;
    int day;
};
int main(){
    struct data data;
    int result=0;
    printf("please input year-month-day\n");
    scanf("%d-%d-%d",&data.year,&data.month,&data.day);
    switch (data.month) {
        case 1:
            result=data.day;
            break;
        case 2:
            result=31+data.day;
            break;
        case 3:
            result=59+data.day;
            break;
        case 4:
            result=90+data.day;
            break;
        case 5:
            result=120+data.day;
            break;
        case 6:
            result=151+data.day;
            break;
        case 7:
            result=181+data.day;
            break;
        case 8:
            result=212+data.day;
            break;
        case 9:
            result=242+data.day;
            break;
        case 10:
            result=273+data.day;
            break;
        case 11:
            result=303+data.day;
            break;
        case 12:
            result=334+data.day;
    }
    printf("%d\n",result);
}

