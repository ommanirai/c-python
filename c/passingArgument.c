#include<stdio.h>
// 1st
// function declaration
int welcome(int n, int a);
// n is parameter

int main(){
    int n = 23;
    int a = 212;
    // 3rd
    // function call
    welcome(23,1);
    // 1, a is argument
    welcome(a);
    return 0;
}
// 2st
// function initialization
int welcome(int n){
    // name is parameter
    printf("hi %d, welcome to Vedu\n", n);
}

int sum(int a, int b);

int sum(int a, int b){
    int sum = a + b;
    printf("sum of two numebr is: %d", sum);
}