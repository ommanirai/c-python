#include<stdio.h>

int main(){
    /*
    break and continue statement
    
    */
    int num=3;
    for(int i=1;i<=10;i++){
        if(num == i){
            // break;
            continue;
        }
        printf("%d\n", i);
        sum +=i;
    }


    return 0;
}