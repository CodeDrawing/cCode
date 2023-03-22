#include <stdio.h>

#include <string.h>

int firstUniqChar(char * s){
    int count[26];
    int sequence[26];
    memset(count,-1,sizeof (int)*26);
    memset(sequence,0,sizeof (int)*26);
    int current=0;
    char *ps=s;
    while(*ps!='\0'){
        if(count[*ps-97]!=-1){
            sequence[count[*ps-97]]=-1;
        }else{
            count[*ps-97]=current;
            sequence[current]=1;
            current++;
        }
        ps++;
    }
    //得到sequence中的第一个1；
    int temp=-1;
    for (int i = 0; i < 26; ++i) {
        if(sequence[i]==1){
            temp=i;
            break;
        }
    }
    if(temp==-1){
        return -1;
    }
    int index=0;

    for(int i=0;i<26;i++){
        if(count[i]==temp){
            index=i;
            printf("%d\n",index);

        }
    }
    char aa=97+index;
    printf("%c\n",aa);
    int result=0;
    while (*s!='\0'){
        if(*s==index+97){
            return result;
        }
        result++;
        s++;
    }
    return -1;
}
int main(){
    char a[]="dddccdbba";
    printf("%d",firstUniqChar(a));
}

