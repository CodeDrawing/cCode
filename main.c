#include <stdio.h>

int jie_cheng(int x){
    if(x==1){
        return 1;
    }
    return x * jie_cheng(x-1);
}

int main(){
    printf("result is = %d\n",jie_cheng(5));
   return 0;
}
