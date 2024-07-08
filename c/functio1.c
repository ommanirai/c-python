#include<stdio.h>
    int sunday(){
        printf("sunday");
    }
    int monday(){
        printf("monday");
    }  
         int tuesday(){
            printf("tuesday");
         }

         int wednesday(){
            printf("wednesday");
         } 
         int thursday(){
            printf("thursday");
         }
         int friday(){
            printf("friday");
         } 
          int saturday(){
            printf("saturday");
          }






int main(){
    int day=1;
    if(day==1){
        sunday();
    }
        else if(day == 2){
            monday();
        } 
         else if (day == 3){
            tuesday();
         }

         else if (day == 4){
            wednesday();
         }  
         else if (day == 5){
            thursday();
         }
         else if (day == 6){
            friday();
         }
         else if ( day == 7){
            saturday();
         }
         else{
            printf("invalid");

         }     

return 0;
    
}


