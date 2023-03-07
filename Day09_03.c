//
// Created by 84539 on 2023/3/2.
//
#include "stdio.h"
int main() {
    char c[10][10] = {""};
    int left = 4, right = 5;
    //层数
    int f = 0;
    for (int i = 0; i < 10; ++i) {
        if (i == 0) {
            c[f][left] = '*';
            c[f][right] = '*';
        } else if (i < 5) {
            left--;
            right++;
            c[f][left] = '*';
            c[f][right] = '*';
        }
//        else if(i==5){
//            printf("left= %d\n",left);
//            printf("right= %d\n",right);
//            c[f][left]='*';
//            c[f][right]='*';
//        }
        else {
            c[f][left] = '*';
            c[f][right] = '*';
            left++;
            right--;
        }
        f++;
    }
    //输出
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            printf("%c", c[i][j]);

        }
        printf("\n");
    }
    return 0;
}