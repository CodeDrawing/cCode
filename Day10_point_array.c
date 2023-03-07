//
// Created by 84539 on 2023/3/3.
//
#include <stdio.h>
int main() {
    int a[3][4] = {{1, 2,  3,  4},
                   {5, 6,  7,  8},
                   {9, 10, 11, 12}};
    int *pa[3];
    int sum;
    pa[0] = &a[0][0];
    pa[1] = &a[1][0];
    pa[2] = &a[2][0];
    for (int i = 0; i < 4; ++i) {
        sum = sum + pa[0][i] + pa[1][i] + pa[2][i];
    }
    printf("sum is %d", sum);
}