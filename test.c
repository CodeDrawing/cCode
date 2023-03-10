//
// Created by 84539 on 2023/3/9.
//
#include <stdio.h>
void clear_space(char * p);
int main(){
    char a[50]="abcd   dfwedfw  ";
    clear_space(a);
    printf("result is %s",a);
    return 0;
}
void clear_space(char * pa){
    char *q =pa;
    while (*pa!='\0'){
        if(*pa!=' '){
            *q=*pa;
            pa++;
            q++;
        } else{
            pa++;
            *q=*pa;
        }
    }
    *q='\0';
}