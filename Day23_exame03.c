#include <stdio.h>
int count_sub_chars(char *a, char* sub_a){
    char *pa=a;
    char *p_sub_a=sub_a;
    int count=0;
    int flag=0;
    while(*pa!='\0'){
        flag=0;
        if(*pa==*p_sub_a){
            while(*p_sub_a!='\0'){
                if(*pa!=*p_sub_a){
                    flag=1;
                    break;
                }
                pa++;
                p_sub_a++;
            }
            pa--;
            p_sub_a=sub_a;
            if(flag==0){
                count++;
            }
        }
        pa++;
    }
    return count;
}

int main() {
    char a[] = "hellohellohelllo";
    char sub_a[] = "lllo";
    int count =count_sub_chars(a,sub_a);
    printf("%d\n",count);
}

