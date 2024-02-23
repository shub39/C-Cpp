//Find Week By Weekday Number (Switch conditional)
//DISCLAIMER: Switch conditional is useless!!
#include<stdio.h>
int main(){
    int w;
    printf("Enter weekday Number:  ");
    scanf("%d",&w);
    switch (w){
        case 1: 
        printf("Monday");
        break; 
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4: 
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6: 
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default: printf("What day of the week is that?\n Dumb Fuck ");
    }
    return 0;
}