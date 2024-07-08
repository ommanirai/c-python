#include<stdio.h>

int main(){
    printf("hello world");
    // comment => single line comment
    /*
    multi
    line
    comment
    in
    c
    */



    /*
    variable:
    image
    number
    document
    file
    audio
    video
    ram 923823423

    rules for declaring a variable:
    1. always start with lowercase or underscore
    ram
    _ram
    2. do not use white space
    ram_kumar
    ramkumar
    ramKumar
    3. do not use keywords
    keywords: int, include, return, if, main, printf, else, do, while, function
    4. c variable are case sensitive

    readable: naming convention
    ramkumar 
    ramKumar => camel case
    ram_kumar => snake case
    RamKumar => pascal case
    ram-kumar => kebab case
    */
    char n ='r';
    char a ='b';
    int number = 12;
    float gpa = 3.8;


    printf("ram %d ko %d number: %d", number,number, number);
    printf("manish gpa: %f", gpa);

    /*

    data type:
    1. primary data type
        a. int(number)
        b. char(character)
        c. float(decimal number)
    2. derived data type
        a. function
        b. array
        c. pointer
    3. user defined data type
        a. structure
        b. union

    format specifier
    int %d
    char %c
    float %f
    string %s
    
    */

    return 0;
}