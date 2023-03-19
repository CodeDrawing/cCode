#include <stdio.h>
int maxDepth(char * s){
    char *ps=s;
    int current=0;
    int max=0;
    while (*ps!=' '){
        if(current>max){
            max=current;
        }
        if(*ps=='('){
            current++;
        }else if(*ps==')'){
            current--;
        }
        ps++;
    }
    return max;
}
int main(){
    char s[100]="(1)+((2))+(((3)))";
    int result=maxDepth(s);
    printf("%d\n",result);
}

