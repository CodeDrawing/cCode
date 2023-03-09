#include <stdio.h>

int sum_two_dimension_array(int *pa,int one_dim,int two_dim);
int main(){
    int a[3][3]={5,55,883,89,44,6,66,64,33};
    int sum=sum_two_dimension_array(a,3,3);
    printf("the result = %d ",sum);
return 0;
}

int sum_two_dimension_array(int *pa,int one_dim,int two_dim){
    int sum=0;
    int (* ppa)[3]=pa;
    for (int i = 0; i < one_dim; ++i) {
        for (int j = 0; j < two_dim; ++j) {
            sum+=*(*(ppa+i)+j);
        }
    }
    return sum;
}