#include<stdio.h>

int main(){
    for(int i=1;i<=5;i++){ // i = 1
        for(int j=1; j<=i;j++){
            // printf("%d", i);
            // printf("%d", j); // j=1 2 3 4 5
            printf("*\t");
        }
        printf("\n");
    }

    return 0;
}


/*
1. 
* 
* * 
* * * 
* * * * 
* * * * *

2.
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

3. 
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

4. 
5 4 3 2 1
5 4 3 2
5 4 3 
5 4
5

5.
2 4 6 8 10
1 4 6 8
2 4 6
2 4
2




*/