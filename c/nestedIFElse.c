#include<stdio.h>
int sunday(){
        printf("sunday");
}

int main(){
    // 1, 7
    int day ;
    printf("enter a number to find a day");
    scanf("%d ", &day);

    if(day==1){
        sunday();
    }
    else if(day == 2){
        printf("monday");
    }
    
   else if ( day == 3){
        printf("tuesday");
    }
    else if (day == 4){
        printf("wednesday");
    }
   else if ( day == 5){
        printf("thursday");
    }
    else if ( day == 6){
        printf("friday");
    }
   else if(day == 7){
        printf("saturday");
    }
    else
    printf("invalid input.please enter a valid number");

    






    /*
    student marksheet
    subjects:
    english
    math
    nepali
    computer
    > 35
    if > 35
        pass
        if percent > 90
            A+
        80-90
            A
        
    else
        fail
    
    
    
    
    */



    return 0;
    }
