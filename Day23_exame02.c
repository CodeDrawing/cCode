//
// Created by 84539 on 2023/3/9.
//
 #include <stdio.h>
 char *strncat(char * str1,char *str2,int n){
    char *p_str1=str1;
    while(*str1!='\0'){
        str1++;
    }
    for (int i = 0; i < n; ++i) {
         *str1=*str2;
         str2++;
         str1++;
    }
    *str1='\0';
    return p_str1;
}

 int main(int argc, char *argv[])
 {
    char a[]="abd";
    char b[]="eeeeee";
     printf("%s \n",strncat(a,b,6));
 }