//
// Created by 84539 on 2023/3/2.
//
#include <stdio.h>
void my_strcat(char *pa,char *pb){


    while(*pa!='\0'){
        pa++;
    }
    while(*pb!='\0') {
        *pa = *pb;
        pa++;
        pb++;

    }
    *pa='\0';


}
int main(){

    char a[]="abkkkkkkkkkcddd";
    char b[]="abkkkkkkkkkcdddabkkkddd123";
    my_strcat(a,b);
    printf("a= %s",a);
    return 0;
}
