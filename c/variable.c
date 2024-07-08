#include<stdio.h>

int main(){
    // ctrl + / => to comment/uncomment
    // single line comment in c
    /*
    asdf
    asddf
    sdaf
    as
    */
    /*
    mul
    ti 
    line 
    comment 
    in
    c

    data
    photo
    video
    songs
    contacts

    name1$#@
    address
    ramNumber

    ram
    Lalitpur
    ram
    9812121223

    */
    // printf("hi from c programming");
    // printf("hi");

    /*
    variable
    => container
    => memory allocation

    name
    Name
    nAme
    NAME
    _name
    _1nad
    
    first_name
    firstName
    FirstName

    first-name
    asd%
    1name


    rules for declaring a variable
    => always start with alphabet or underscore
    => dont start with numeber or special character
    => not use white space
    => not use keywords
    => c variables are case sensitive

    naming convention
    first_name => snake case
    firstName => camel case
    FirstName => pascal case


    */
    int number;
    int n;
    char name;
    name='c';
    float a;
    a = 23.23;
    number = 234566;
    n=100;
    // printf("number", number);
    // format specifier
    /*
    %d => number
    %f => float/decimal number
    %c => character
    */

    printf("number %d %d %c %f\n", number,  n, name, a);
    printf("name: %c\n", name);
    printf("decimal number: %f\n", a);
    return 0;
}
