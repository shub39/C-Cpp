#include<stdio.h>
int main(){
    int x;
    printf("Enter the Number :");
    scanf("%d",&x);
    if (x%5==0) printf("Divisible by 5");
    if (x%5!=0) printf("Not Divisible by 5");
    return 0;
}