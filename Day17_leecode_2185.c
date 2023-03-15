#include <stdio.h>
int prefixCount(char ** words, int wordsSize, char * pref){
    int count=0;
    char *ppref=pref;
    char *pwords=words[0];
    for (int i = 0; i < wordsSize; ++i) {
        while (*ppref!='\0'){
            if(*pwords!=*ppref){
                if(i+1>wordsSize){
                    break;
                }
                pwords=words[i+1];
                ppref=pref;
                break;
            }else{
                pwords++;
                ppref++;
            }
        }
        if(*ppref=='\0'){
            count++;
        }
        pwords=words[i+1];
        ppref=pref;
    }
return count;
}
int main(){
    char **a[]= {"leetcode","leetcode","leetcode","leetcode","win","win","win","win","win","win","win","win","win","win","loops","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","success","win"};
    char b[]="win";
    int result=0;
    result=prefixCount(&a,90,b);
    printf("%d",result);
}
