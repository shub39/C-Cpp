#include<stdio.h>
int main(){
    int f;
    printf("Enter the Year :");
    scanf("%d",&f);
    if(f%400==0 || (f%4==0 && f%100!=0 )) {
        printf("Leap year");
    }
    else{
        printf("Not Leap year");
    }
    return 0;
}