#include<stdio.h>

int main(){
 int numbers[5];
 int i;
 printf("enter 5 numbers:\n");
 for(i=0; i < 5; i++) {
    printf("Number %d: ", i + 1);
    scanf("%d", &numbers[i]);
 }
 printf("\nAfter doubling:\n");
 for (i = 0; i < 5; i++) {
    printf("Number %d doubled: %d\n", i + 1, numbers[i] * 2);
 }
 return 0;
}












