#include<stdio.h>

int main(){
    /*
    operator:
    => operator is a symbol which perform a specific task with operands

    types:
    1. arithmetic operator
    +
    -
    *(multiplication)
    /(division)
    %(remainder/modulo operator)

    */
    int a = 23;
    int b = 25;
    int result = a + b;
    int remainder  = b % a;
    // a and b is operand
    //  + => operator
    printf("remainder of %d and %d is %d\n", b, a, remainder);
    printf("sum of two number %d and %d is: %d",a, b, result);


    return 0;
}