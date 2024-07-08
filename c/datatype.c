#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    /*
    data type:
    1. primary data type
        a. int
        b. float
        c. char
    2. derived data type
        a. function
        b. array
        c. pointer
    3. user defined data type
        a. structure
        b. union
    */

    // int
    // variable declaration
    int n;
    // variable initialization
    n=100;
    // declaration and initialization
    char c ='x';
    float x = 13.23;

    printf("number value: %d\n", n);
    printf("character value: %c\n", c);
    printf("float/decimal value: %f\t%f\n", x, x);
    printf("numeber value: %d  decimal/float value: %f character value: %c",x,n, c);

    return 0;
}