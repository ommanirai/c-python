#include<stdio.h>

int main(){ 
    /*
    array types:
    1. one dimensional array
    2. two dimensional array
    
    */
    int n[4][4];
    // n[0][0]
    // n[0][1]
    // n[0][2]

    // n[1][0]
    // n[1][1]
    // n[1][2]

    // n[2][0]
    // n[2][1]
    // n[2][2]
    for(int i =0; i<4;i++){
        // scanf("%d", &n[i]);
        for(int j=0;j<4;j++){
            scanf("%d", &n[i][j]); //when i = 0; n[0][0],n[0][1],n[0][2]
            // when i = 1; n[1][0],n[1][1],n[1][2]
            // when i = 2; n[2][0],n[2][1],n[2][2]
        }
    }
    for(int i =0; i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d\t", n[i][j]);
        }
        printf("\n");
    }




    // int a[5] = {1,2,3,4,5};
    // int x[2][3] = {{1,2,3}, {4,5,6}};
    /*
    1 2 3
    2 3 4
    5 6 7
    3*3

    1 3
    2 5
    2*2

    1 2 3
    4 5 6
    2*3
    
    */
    // x[0][0] = 1
    // x[1][2] = 6
    // printf("%d", x[1][2]);
    


    return 0;
}