#include <stdio.h>
int main(){
    int n;
    printf("enter a number\n");
    scanf("%d ,&a");
    int a;
    printf("enter a number\n");
    scanf("%d ,&a");
    int b;
    printf("enter a number\n");
    scanf("%d" ,&b);
    (n%a==0 && n%b==0) // if
    ?printf("it is divisible by both")
    :(n%a==0 || n%b==0) // else, if
    ?n%a==0 // if
        ?printf("divisible by a");
        :printf("divisible by b");
    : printf("both invalid") // else
}
wap to check username and password by using strcmp in string c programming