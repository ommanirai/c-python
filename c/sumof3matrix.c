#include<stdio.h>
int main(){

 int n[3][3], x[3][3], sum[3][3];
    printf("enter first matrix\n");
    for(int i =0; i<3;i++){
        
        for(int j=0;j<3;j++){
            scanf("%d", &n[i][j]); 
        }
    }
printf("enter second matrix\n");
     for(int i =0; i<3;i++){
        
        for(int j=0;j<3;j++){
            scanf("%d", &x[i][j]); 
        }
    }
    printf("first matrix\n");
    for(int i =0; i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t", n[i][j]);
        }
        printf("\n");
    }
    printf("second matrix\n");
 for(int i =0; i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t", x[i][j]);
        }
        printf("\n");
    }

    for(int i =0; i<3;i++){
        for(int j=0;j<3;j++){
            // printf("%d\t", x[i][j]);
            sum[i][j] = n[i][j] + x[i][j];
        }
        printf("\n");
    }
    printf("sum of two matrix\n");
for(int i =0; i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }



printf("enter third matrix\n");
     for(int i =0; i<3;i++){
        
        for(int j=0;j<3;j++){
            scanf("%d", &x[i][j]); 
        }

     }


    


    return 0;
    

}






