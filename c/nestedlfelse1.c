#include<stdio.h>
int main (){
    // int marks = 35
    // students marksheet
    int nepali, english, math, science, computer;
    printf("enter the marks of nepali");
    scanf("%d", &nepali);
    printf("enter the marks of english");
    scanf("%d", &english);
    printf("enter the marks of math");
    scanf("%d", &math);
    printf("enter the marks of science");
    scanf("%d", &science);
    printf("enter the marks of computer");
    scanf("%d", &computer);

     if(nepali > 35 && english > 35 && math > 35 && science > 35 && computer > 35)
             printf("pass");
            float total;
            total = english + math + science + computer;
        float percent;
        percent = ((total/400)*100);
        if(percent >= 90){
           printf("a+") ;
         }
         else if(percent >= 80 && percent <= 90){
             printf ("A");
             }
             else if(percent >= 70 && percent <= 80){
                printf("b+");
                }
                else if( percent >=60 && percent <= 70){
                  printf ("b");
                }
     
    else {
      printf("fail");
    } 
     if(nepali < 35){
       printf (" nepali fail");
   }
    else if(english < 35){
      printf(" english fail");
     }
     else if(math < 35){
       printf (" math fail");
     }
     else if( science < 35){
       printf(" science fail");
     }
     else if(computer < 35){
      printf (" computer fail");
     }


     return 0;
}






             