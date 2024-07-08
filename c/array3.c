#include<stdio.h>

int main(){
    int userData[5];
    // userData[0], userData[1],userData[2], userData[3], userData[4]
    int sum=0;
    for(int i = 0; i<=4;i++){
        scanf("%d", &userData[i]);
    }

    for(int i=0;i<=4;i++){
        sum += userData[i];
    }

    printf("%d", sum);

    return 0;
}