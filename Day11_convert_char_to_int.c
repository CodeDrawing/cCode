
#include <stdio.h>

int main()
{
    char a[]="12345",*pa=a;
    int b[50],*pb=b,i=0;
    while(*pa!='\0'){
        *pb=*pa-48;
        printf("pa=%d\n",*pb);
        pa++;
        pb++;
        i++;
    }
    for (int j = 0; j < i; ++j) {
        printf("%d ",b[j]);
    }
    return 0;
}
