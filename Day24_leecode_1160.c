#include <stdio.h>
#include <string.h>
int countCharacters(char ** words, int wordsSize, char * chars){
    int index[26];
    int count=0;
    int back[26];
    memset(index,-1,sizeof(int)*26);
    memset(back,-1,sizeof(int)*26);
    while(*chars!='\0'){
        if(index[*chars-97]!=-1){
            index[*chars-97]++;
            back[*chars-97]++;
        }else{
            index[*chars-97]=1;
            back[*chars-97]=1;
        }
        chars++;
    }
    //输出
//    for (int i = 0; i < 26; ++i) {
//        printf("%d ",index[i]);
//    }

    int j;



    for (int i = 0; i < wordsSize; ++i) {
        for (int k = 0; k < 26; ++k) {
            index[k]=back[k];
        }
        j=0;
        while (*(*(words+i)+j)!='\0'){

            if(index[*(*(words+i)+j)-97]==-1){
                break;
            }else if(index[*(*(words+i)+j)-97]==1){
                index[*(*(words+i)+j)-97]=-1;
            }else{
                index[*(*(words+i)+j)-97]--;
            }
            printf("%c\n",*(*(words+i)+j));
            j++;
        }
        if(*(*(words+i)+j)=='\0'){
            count+=j;
        }
    }
    return count;
}
int main(){
   char* words[] = {"cat","bt","hat","tree"};
   char chars[]= "atach";
   int result=countCharacters(&words,4,chars);
    printf("%d \n",result);
}

