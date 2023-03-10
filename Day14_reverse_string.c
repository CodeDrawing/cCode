#include <stdio.h>

char *reverse_string(char *pa);
int main(){
    char a[]={"aadfdveeewfdfefsd"};
    printf("result is %s\n",reverse_string(a));
return 0;
}
char *reverse_string(char *pa){
    char temp;
    char *p_left=pa,*p_right=pa;
    while (*(p_right+1)!='\0'){
        p_right++;
    }

    while(p_left<=p_right){
        temp=*p_left;
        *p_left=*p_right;
        *p_right=temp;
        p_left++;
        p_right--;
    }
    return pa;
}