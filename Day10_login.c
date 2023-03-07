//
// Created by 84539 on 2023/3/3.
//
#include <stdio.h>
#include "string.h"
int main(){
    char user_name[10]={"zx"};
    char password[20]={"08290829"};
    char current_user_name[20];
    char current_password[20];
    printf("Please input the userName:\n");
    scanf("%s",&current_user_name);
    printf("Please input the password:\n");
    scanf("%s",&current_password);

    if(strcmp(user_name,current_user_name)!=0|| strcmp(password,current_password)!=0){
        printf("Sorry,check the userName Or Password\n");
    }else{
        printf("Welcome!\n");
    }

    return 0;
}