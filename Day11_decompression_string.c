//
// Created by 84539 on 2023/3/6.
//
#include <stdio.h>
void decompression(char a[],char b[]){
    char *pa=a;
    char *pb=b;
    int temp=0;
    while(*pa!='\0'){
            temp=temp*10+(*pa-48);
            pa++;
        if(*(pa)>'A'&&*(pa)<'z'){
            for (int i = 0; i < temp; ++i) {
                *pb=*pa;
                pb++;
            }
            temp=0;
            pa++;
        }
    }
}