#include<stdio.h>
int main(){
    float f;
    printf("Enter the Number :");
    scanf("%f",&f);
    int x = (int)f;
    float a = (float)x;
    if (f-a==0) printf("Number is Integer");
    if (f-a!=0) printf("Number is not Integer");
    return 0;
}