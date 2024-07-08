#include<stdio.h>

int main(){
    /*
    3. logical operator
    a. logical and (&&)
    condition1  condition2  result(condition1 && condition2)
    TRUE        TRUE        TRUE && TRUE => TRUE
    TRUE        FALSE       FALSE
    FALSE       TRUE        FALE
    FALSE       FALSE       FALSE


    b. logical or (||)
    condition1  condition2  result(condition1 && condition2)
    TRUE        TRUE        TRUE || TRUE => TRUE
    TRUE        FALSE       TRUE
    FALSE       TRUE        TRUE
    FALSE       FALSE       FALSE

    c. logical not(!)
    */
    int a = 12;
    int b = 15;
    int condition1 = a < b; // 1(TRUE)
    int condition2 = a > b; // 0(FALSE)
    //int res = (a < b) && (a > b)
    int result = (condition1 && condition2); // 1 && 0 => TRUE && FALSE
    int res = condition1 || condition2;
    int final_result = result || res;

    printf("result of and operator is : %d\n", result);
    printf("result of or operator is : %d\n", res);
    return 0;
}