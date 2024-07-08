#include<stdio.h>

int choice(int symbol);
int multiplication(int n1,int n2);



int main(){
    int m;
    printf("enter symbol\n");
    scanf("%d",&m);
    int a = 24;
    int b = 12;
    int multiplication_result;


    int choice_result = choice(m);
    switch (choice_result){
        case 1:
        multiplication_result = multiplication(a,b);
        printf("%d",multiplication_result);


}
    return 0;
}
    int multiplication(int n1,int n2 ){
    int multiplications = n1 * n2;
    return multiplications;
}


    int choice(int symbol){
    return symbol;
}