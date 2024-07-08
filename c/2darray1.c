#include<stdio.h>

int main(){ 
    
    int n[4][4];
    
    for(int i =0; i<4;i++){
        
        for(int j=0;j<4;j++){
            scanf("%d", &n[i][j]); 
        }
    }
    for(int i =0; i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d\t", n[i][j]);
        }
        printf("\n");
    }




    


    return 0;
}