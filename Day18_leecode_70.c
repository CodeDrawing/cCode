#include <stdio.h>
int climbStairs(int n){
    int a[46]={0};
    int i=0;
    a[1]=1;
    a[2]=2;
    for(i =3;i<=n;i++){
        a[i]=a[i-2]+a[i-1];
    }
    return a[n];
}
int main(){
    int result=climbStairs(5);
    printf("%d\n",result);
    return 0;
}