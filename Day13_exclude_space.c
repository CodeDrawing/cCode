#include <stdio.h>

void exclude_space(char *a);
int main(){
    char a[]="asd  af  aa  z67";
    printf("before %s\n",a);
    exclude_space(a);
    printf("after %s\n",a);
    return 0;
}
void exclude_space(char *a){
    char *pa=a,*p_current=a+1;

    while(*p_current!='\0'){
       if(*p_current==' '){
           p_current++;
           if(*(pa+1)!=' '){
               pa++;
           }
       }
       else {
           pa++;
           *pa=*p_current;
           *p_current=' ';
           p_current++;
       }
   }

}
