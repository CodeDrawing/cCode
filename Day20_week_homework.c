#include <stdio.h>
#include "outputArray.h"
//1.将最下面的牌放回原数组最上面
//2.将最下面的牌放到最上面
int main(){
char *poke[13]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
char *origin[13];
int j=0;
char *temp;

    for (int i = 12; i >=0; i--) {
        if(j==0){
            origin[j]=poke[i];
            j++;
            continue;
        }
        for (int k = j-1; k >=0; k--) {
            origin[k+1]=origin[k];
        }
        origin[0]=poke[i];
        temp=origin[j];
        for (int k = j; k >=0; k--) {
            origin[k+1]=origin[k];
        }
        origin[0]=temp;
        j++;
    }
    for (int i = 0; i < 13; ++i) {
        printf("%s ",origin[i]);
    }
    return 0;
}

