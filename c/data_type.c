#include<stdio.h>

int main(){
    /*
    data type in c:
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
    // variable declaration
    int x;
    // variable initialization
    x = 23;

    // variable declaration and initialization
    int a = 23;

    char b = 'c';
    float c = 23.23;
    // overwrite
    b = 'x'
    a = 12;
    printf("the value of a is: %d", a);


    return 0;
}