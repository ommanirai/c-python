#include<stdio.h>

int main(){
    int x = 12;
    float a = 23.67;
    char c = 'c';

    // syntax
    // type_declare variable_name[length_of_data] = {data}
    /*
    types of array
    1. one dimensional array
    2. two dimensional array
    
    */
    int y[5] = {1,2,3,4,5};
    int number[5];
    // index
    // y[index]
    // y[4]
    // printf("%d %d %d\n",y[0], y[1], y[4]);
    for(int i = 0; i<=4; i++){
        // printf("%d\n", y[i]);
        scanf("%d", &number[i]);
    }
    for(int i = 0; i<=4; i++){
        // printf("%d\n", y[i]);
        printf("%d", number[i]);
    }
    // 1. wap to take 5 input and double it
    return 0;
}