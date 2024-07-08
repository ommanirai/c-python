#include<stdio.h>
#include<math.h>
int main(){
int a;
printf("enter a number\n");
scanf("%d",&a);
int b;
printf("enter a second number\n");
scanf("%d",&b);

printf("enter 1 for addition");
printf("enter 2 for subtracrtion");
printf("enter 3 for multiplication");
printf("enter 4 for division");
int s;
printf("enter a symbol\n" );
scanf("%d",&s);
// if (s==1){
    
//     int sum = a+b
//     printf("sum %d",sum);
// } 
// else if (s==2){
//     int difference = a-b 
//     printf("difference %d",difference);
// }

// int n1, n2;
// int symbol;
// input first number
// press 1 for addition, 2 for substraction and so on
// input second number
if(s==1){
    int sum = a + b;
    printf("sum of two number is %d", sum);
}
else if(s==2){
    int diff = a - b;
    printf("diff of two number is %d", diff);
}
else if(s==3){
    int multiplication = a * b;
    printf("mul of two number is %d",multiplication);
}
else if (s==4){
    int division = a/b;
    printf("div of two number is %d",division);
}
else if (s==5){
    int remainder = a % b;
    printf("remainder of two number is %d",remainder);
}
else if (s==6){
    float sqroot= sqrt(a);
    printf("sqrt of two number is %f",sqroot);
}
else if (s==7){
    int p = pow(a,b);
    printf("pow of number is %d ", p);
}


return 0;
}



