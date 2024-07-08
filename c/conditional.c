#include<stdio.h>


int main(){
    /*
    conditional/ternary operator in c
    condition
    boolean => true(1)/false(1)

    syntax:
    condition ? body of truth : body of false

    */
    int a = 2;
    a < 20 
    // ? printf("a is less than 20") 
    ? a < 10
        ? printf("a is less than 20 and 10")
        : printf("a is less than 20 and greater than 10")
    : printf("a is not less than/ greater than 20");


    int number = 23;
    number > 0
    ? printf("%d is a positive number\n", number)
    : printf("%d is a negative number\n", number);

    // check the number is odd or even

    // 21, 3 7
    // divisible by both
    // not divisible by both
    // divisible by 3
    // divisible by 7
    



    return 0;
}