#include <stdio.h>
int jiecheng(int n){
    if(n>1){
        return n * jiecheng(n-1);
    }else if(n==1){
        return 1;
    }
}
int main(){
    int result=0;
    int n;
    printf("please input a number:\n");
    scanf("%d",&n);
    for (int i = 0; i <= n; ++i) {
        result= result+jiecheng(i);
    }

    printf("%d\n",result);
}
