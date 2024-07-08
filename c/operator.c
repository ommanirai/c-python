#include<stdio.h>

int main(){
/*
operator in c
=> operator is a symbol which perform specific task

types of operator in c:
1. arithmetic operator
+
-
/(division)
*(multiplication)
%(modulo/remainder)

2. relational operator
=> returns 1(TRUE) or 0(FALSE)
<
>
<=
>=
!=
==
condition
a 
b
a > b
a < b
a == b

3. logical operator
a. logical and (&&)
condition1  condition2  result(condition1 && condition2)
TRUE        TRUE        TRUE && TRUE => TRUE
TRUE        FALSE       FALSE
FALSE       TRUE        FALE
FALSE       FALSE       FALSE


b. logical or (||)
c. logical not(!)

*/
    int a = 25;
    int b = 12;
    int sum;
    float div;
    int mul;
    int diff;
    int remainder;
    sum = a + b;
    diff = a - b;
    div = a / b;
    mul = a * b;
    remainder = a % b;
    // a, b => variable, operands
    // + => operator
    printf("the sum of two number is: %d\n", sum);
    printf("the difference of two number %d and %d is: %d\n",a, b, diff);
    printf("the division of two number %d   and %d is: %f\n",a, b, div);
    printf("the multiplication of two number %d and %d is: %d\n",a, b, mul);
    printf("the remainder of two number %d and %d is: %d\n",a, b, remainder);
    return 0;
}

