#include <stdio.h>
#include <stdbool.h>

bool divisorGame(int n){
    int x=n-1;
    //-1为alise，1为bob
    int flag=-1;
    while(x<n&&x>0){

        if(n%2==0){
            if(flag==-1){
                return true;
            }else{
                return false;
            }
        }
        x=1;
        n=n-x;
        flag=-1*flag;

    }

}

int main(){
    int x=6;
    printf("%d\n", divisorGame(x));
}

