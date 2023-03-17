#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("please input a numbers: \n");
    scanf("%d",&n);
    int (*matrix)[n]=(int *)malloc(sizeof (int)*n);
    for (int i = 0; i < n; ++i) {
        /*
         * 想的屎山代码，还不对，想复杂了
         */
//           if(i+j<=n-1){
//               *(*(matrix+i)+j)=(n-j-i)*(n-j-i);
//           }else if(n-j-i==0) {
//               *(*(matrix + i) + j) = n * n;
//           }else if(i==j){
//               *(*(matrix+i)+j)=(n-i+1)*(n-i+1);
//           }else {
//               *(*(matrix+i)+j)= abs(n-j-i)*abs(n-j-i);
//           }

        for (int j = 0; j < n; ++j) {
           if(i+j<=n-1){
               *(*(matrix+i)+j)=(n-j-i)*(n-j-i);
           }else{
               *(*(matrix+i)+j)=(2*n-j-i)*(2*n-j-i);
           }
        }
    }
    //遍历该二维数组
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ",*(*(matrix+i)+j));
        }
        printf("\n");
    }
    //释放指针
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            free((*matrix+i)+j);
        }

    }
}

