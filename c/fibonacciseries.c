#include<stdio.h>

int main(){
    /*
    int userInput =5;
    fibonacci series
    0 1 1 2 3 5 8 13 21 34 55
    a=0
    b=1
    c= a + b = 0 + 1 = 1
    a = b
    b = c

    */
    int a =0;
    int b =1;
    int userInput=7;
    int c;
    if(userInput==1){
        printf("%d", a);
    }
    else if(userInput==2){
        printf("%d", a);
        printf("%d", b);
    }
    else{
        printf("%d\n", a);
        printf("%d\n", b);
        for(int i=1;i<=userInput-2;i++){
            c = a + b;
            printf("%d",n);
            b=c;
        }
    }

    return 0;
}