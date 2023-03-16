#include <stdio.h>
#include "outputArray.h"
int jiecheng(int n){
    if(n>1){
        return n * jiecheng(n-1);
    }else if(n==1){
        return 1;
    }
}
int main(){
    int result=0;
    int n=3;
    for (int i = 0; i <= n; ++i) {
        result= result+jiecheng(i);
    }

    printf("%d\n",result);
}
