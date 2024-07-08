#include <stdio.h>
 
 #define ME 5

int main() {
    int numbers[ME];
    int i;
    printf("enter %d numbers:\n", ME);
    for (i = 0; i < ME; i++) {
        scanf("%d", &numbers[i]);
    }






    printf("\ndoubled numbers in reverse order:\n");
    for (i = ME - 1; i >= 0; i--) {
        printf("%d", numbers[i] * 2);
    }

    return 0;
}






