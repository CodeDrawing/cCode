#include <stdio.h>

int main(){
    char *country[5]={"china","japan","italy","french","england"};
    char *temp=NULL;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 4; ++j) {

            if(*country[j]>*country[j+1]){
                temp=country[j];
                country[j]=country[j+1];
                country[j+1]=temp;
            }
        }
    }
    for (int i = 0; i < 5; ++i) {
        printf("%s ",country[i]);
    }
}
