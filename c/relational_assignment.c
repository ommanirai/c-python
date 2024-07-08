#include<stdio.h>

int main(){
    /*
    1. arithmetic operator
    +, -, *, /, %
    2. relational operator
    => returns 1(true) or 0(false)
    <, >, <=, >=, ==, !=

    3. assignment operator
    =
    +=
    -=
    *=
    /=
    %=

    4. increment/decrement operator
    ++, --

    */
    int first_number = 23;
    int second_number = 23;
    // int result = first_number != second_number;
    // printf("result is: %d", result);
   // first_number+=1;// 23 + 23 => 46
    // first_number = first_number + second_number; // 46 + 23 => 69
    //printf("first number after assingment: %d", first_number);
    // first_number+=1;
    // first_number = first_number + 1;
    second_number++;
    printf("first number: %d", second_number);



    return 0;
}