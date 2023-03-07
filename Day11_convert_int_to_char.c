
#include <stdio.h>

int main()
{
    int a=40;

    char b[50],*pb=b;
    char c[50],*pc=c;

    int i=0;
    while(a!=0){
        *pb=a%10+48;
        pb++;
        a=a/10;
        i++;
    }
    pb--;
    for (int j = 0; j < i; ++j) {
        *pc=*pb;
        pc++;
        pb--;
    }
    printf("%s",c);
    return 0;
}
