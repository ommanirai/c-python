#include<stdio.h>

int main(){
    /*
    condition in c
    1. if
    syntax:
    if(condition){
        body of if
    }
    2. nested if 
    syntax:
    if(condition1){
        if(condition2){
            if(condition3){
                if(condition n){

                }
            }
        }
        printf("alsdjf asdf");
    }
    3. if else
    syntax:
    if(condition){
        body of if(body of truth)
    }
    else{
        body of else(body of false)
    }
    4. nested if else
    syntax:
    if(condition1){
        body of condition 1
    }
    else if(condition2){
        body of condition 2
    }
    else if(condition3){
        body of condition 3
    }
    else if(condition n){
        body of condition n
    }
    else{
        body of else
    }






    5. switch

    */
    int a = 35;
    int n;
    printf("enter the number to check even or odd\n");
    scanf("%d", &n);
    if(n%2 == 0){
        printf("%d is even number\n", n);
    }
    else{
        printf("%d is odd number\n", n);
    }





    if(a> 0){
        if(a > 20){
            if(a > 30 ){
                printf("n is greater than 0, 20 and 30\n");
            }
        }
        printf("a is greater than 0\n");
    }
     





    return 0;
}