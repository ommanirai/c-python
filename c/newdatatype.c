#include<stdio.h>

int main(){
    /*
    data type:
    string, int, float, char
    => c variabels are case sensitive

    name
    Name


    data types in c
    1. primary data type
        a. int
        b. float
        c. char
    2. user defined data type
        a. function
        b. array
        c. pointer
    3. derived data type
        a. structure 
        b. union



    format specifier:
    integer %d
    float %f
    char %c

    \n => line break

    */
    // variable declaration
    char firstName;
    // variable initialization
    firstName = 'c';

    // varibale initialization and declaration
    int a = 10;
    float n = 10.23;

    printf("the value of a is: %d\n",a);
    printf("the value of firstName is: %c\n", firstName);
    printf("the value of n is: %f\n", n);
    return 0;
}