#include<stdio.h>
#include<string.h>

int main(){
    char username[50];
    char password[50];

    printf("enter username\n: ");
    gets(username); 
  

    printf("enter password\n: ");
    gets(password);

    

    char correct_username[50] = "saujan";
    char correct_password[50] = "siuu";


    if(strcmp(username,correct_username) == 0 && strcmp(password,correct_password) == 0) {
printf("login succesfull!.\n");
    }
    else{
        if(strcmp(username,correct_username) == 0 || strcmp(password,correct_password) == 0){
            if(strcmp(username,correct_username) == 0 ){
            printf("password incorrect\n");
            }
            else{
             printf("username incorrect\n");
            } 
        }
        else{
            printf("BOTH INCORRECT");
        }
    }
    
    return 0;
}