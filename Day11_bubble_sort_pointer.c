
#include <stdio.h>
#include "outputArray.h"
int main()
{
    int a[10]={14,52,62,43,88,23,65,84,11,52};
    int *p=a,temp;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 9; ++j) {
            if(p[j]>p[j+1]){
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
    output(a);
    return 0;
}
