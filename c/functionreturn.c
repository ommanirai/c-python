#include<stdio.h>

int sum();



int main(){
    
 sum();
 sum();
    int result = sum();
    printf("sum of two numebr is: %d\n", result);
    printf(" of number: %d\n", result);
    printf("sum: %d\n", result);
    return 0;
}

int sum(){
    int a = 23;
    int b = 12;
    int sum = a + b;
     printf("sum of number is %d\n", sum);
    return sum;
}

int multiply(){

    return 23;
}