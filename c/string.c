#include<conio.h>
#include<stdio.h>
#include<string.h>

int main(){
    /*
    string:
    => array of character

    %d
    %c
    %f
    %s
    */
    // int name;
    char name[50];
    // char names[50] = "manish";
    for(int i=0; i<=5; i++){
        scanf("%s", &name[i]);
    }
     for(int i=0; i<=5; i++){
        printf("%c", name[i]);
    }
    // scanf("%d", &name);
    // printf("above clear method");
    // method
    // clrscr();
    // printf("below clear method");
    // getch();
    return 0;
}