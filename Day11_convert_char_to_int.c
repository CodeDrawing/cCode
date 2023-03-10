
#include <stdio.h>
int convert_char_to_int(char a[]);
int main()
{
    char a[]="-12345";
    int result=0;
    result=convert_char_to_int(a);
    printf("%d",result);
    return 0;
}
int convert_char_to_int(char a[]){
    char *pa=a;
    int b[50],*pb=b,i=0;
    int flag=1;
    int result=0;
    while(*pa!='\0'){
        if(*pa=='-'){
            flag=-1;
            pa++;
        }
        *pb=*pa-48;

        pa++;
        pb++;
        i++;
    }
    for (int j = 0; j <i; j++) {
        result=result*10+b[j];

    }
    if(flag==-1){
        result=0-result;
    }
    return result;
}
