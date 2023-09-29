#include<stdio.h>
int main(){
    float x;
    printf("Enter the Number :");
    scanf("%f",&x);
    if (x>=0) printf("%f",x);
    if (x<0) {
        x=x*(-1);
        printf("%f",x);
    }
    return 0;
}