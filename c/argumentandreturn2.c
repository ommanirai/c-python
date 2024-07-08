#include<stdio.h>

int choice(int symbol);
int division(int n1,int n2);

int main(){
    int d;
    printf("enter symbol\n");
    scanf("%d",&d);
    int a = 50;
    int b = 5;
    int division_result;

     int choice_result = choice(d);
    switch (choice_result){
        case 1:
    division_result = division(a,b);
        printf("%d",division_result);


}
    return 0;
}
    int division(int n1,int n2 ){
    int divisions = n1 / n2;
    return divisions;
}


    int choice(int symbol){
    return symbol;
}
