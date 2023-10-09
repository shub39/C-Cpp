//Check if no is Even or Odd
#include<stdio.h>
int main(){
    int x;
    printf("Enter the Number :");
    scanf("%d",&x);
    if (x%2==0) printf("Even Number");
    if (x%2!=0) printf("odd Number");
    return 0;
}