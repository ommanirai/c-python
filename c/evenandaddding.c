#include <stdio.h>
int main(){
    int i, sum = 0;
    int n[5];

    // printf("even numbers from 1 to 5 and their sum are:\n");

    for(int i = 0; i<5;i++){
        scanf("%d", &n[i]);
    }

    for(i = 0; i <5; i++) {
        if(n[i] % 2 == 0) {
            // printf("%d\n", i);
            sum += n[i];
        }
    }

printf("sum of even numbers: %d\n", sum);

    return 0;
}