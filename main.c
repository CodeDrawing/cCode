#include <stdio.h>
int main(){
    int i=101;
    int a=0,b=0,c=0;
    while (i<=999){
        a=i/100;
        b=(i-a*100)/10;
        c=i%10;
        if(a*a*a+b*b*b+c*c*c==i){
            printf("%d is a daffodil\n",i);
        }
        i++;
    }

   return 0;
}
