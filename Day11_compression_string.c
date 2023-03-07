//
// Created by 84539 on 2023/3/6.
//
#include <stdio.h>
void compression(char a[],char b[]){

   char temp,flag,*current_a=a,*pb=b,arr[100]={'a'},*parr=arr,i;

   int count=0;
   while(*current_a!='\0'){
       flag=*current_a;
       temp=*(current_a+1);
       if(flag==temp){
           count++;
       }else{
           if(count<10){
               count++;
               *pb=count+'0';
               pb++;
               *pb=flag;
               count=0;
               pb++;
           }else{
               i=0;
               while(count!=0){
                   *parr=count%10+'0';
                   parr++;
                   count=count/10;
                   i++;
               }
               for (int j = 0; j < i; ++j) {
                   parr--;
                   *pb=*parr;

                   pb++;
               }
               *pb=flag;
               pb++;
               parr=arr;

           }

       }
       current_a++;
   }

}