#include <stdio.h>
#include <string.h>
struct object{
    char name[32];
    char hobby[100];
    int age;
}a={"zhaoxing","badminton",18};
int main(){
    struct object a;
    a.age=30;
    strcpy(a.name,"hhhhh");
    strcpy(a.hobby,"aaaaa");
    printf("%s,%s,%d\n",a.name,a.hobby,a.age);

}

