//Ternary Operator
#include<stdio.h>
int main(){
    int f;
    printf("Enter the Year :");
    scanf("%d",&f);
    (f%400==0 || (f%4==0 && f%100!=0 )) ? printf("Leap Year"):printf("Not Leap Year");
    return 0;
}