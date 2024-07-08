#include<stdio.h>
int choice(int symbol);
int sum(int n1,int n2);

int main(){
    // function passing argument and return value
    int s;
    printf("enter symbol\n");
    scanf("%d", &s);
    int a = 23;
    int b = 12;
    int sum_result;

    int choice_result = choice(s);

    switch(choice_result){
        case 1:
        sum_result =  sum(a, b);
         printf("%d", sum_result);
    }
    return 0;
}

int sum(int n1,int n2){
    int sums = n1 + n2;
    return sums;
    // return n1+n2;
}

int choice(int symbol){
    return symbol;
}