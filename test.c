//
// Created by 84539 on 2023/3/9.
//
 #include <stdio.h>
 #define A char *
 typedef  char * B;
 int main(int argc, char *argv[])
 {
     A a,b;
     B c,d;
     printf("a=%ld\n",sizeof(a));
     printf("b=%ld\n",sizeof(b));
     printf("c=%ld\n",sizeof(c));
     printf("d=%ld\n",sizeof(d));
     return 0;
 }