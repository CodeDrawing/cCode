#include <stdio.h>
#include <string.h>
struct date{
    int year;
    int month;
    int day;
};
struct object{
    int id;
    char name[50];
    char address[50];
    char phone[11];
    int size;
    struct  date date;
};

int main(){
    struct object obj1;
    obj1.id=1;
    strcpy(obj1.name,"kunkun");
    strcpy(obj1.address,"成都");
    strcpy(obj1.phone,"18121952772");
    obj1.date.year=2000;
    obj1.date.month=8;
    obj1.date.day=29;
    obj1.size=36;
    printf("year=%d , month = %d , day =%d \n",obj1.date.year,obj1.date.month,obj1.date.day);
    printf("name = %s\n",obj1.name);
    obj1.date.day=29;
   return 0;
}
