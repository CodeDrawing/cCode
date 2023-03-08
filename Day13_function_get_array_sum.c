#include <stdio.h>

void exchange(int *a,int *b);

int main(){
    int a=5,b=8;
    int *pa=&a,*pb=&b;
    exchange(pa,pb);
    printf("a = %d\n",a);
    printf("b = %d",b);
    return 0;
}
void exchange(int *a,int *b){
    *a=*a^*b;
    *b=*b^*a;
    *a=*a^*b;
}
