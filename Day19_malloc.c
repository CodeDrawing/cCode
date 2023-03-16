#include <stdio.h>
#include <stdlib.h>
#define a int
int main(){
    a *p=(int *)malloc(sizeof (int)*10);
    a *pp=p;
    for (int i = 0; i < 10; ++i) {
        *p=rand();
        p++;
    }
    for (int i = 0; i < 10; ++i) {
        printf("%d ",*pp);
        pp++;
    }
    free(p);
    p=NULL;
    pp=NULL;
    return 0;
}
