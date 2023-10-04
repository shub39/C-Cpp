#include<stdio.h>
int main(){
    int f;
    printf("Enter the Number:");
    scanf("%d",&f);
    if(f%15!=0){
        if((f%5==0)&&(f%3==0)) printf("Valid Condition");
        else printf("Invalid Conditions");
    } 
    else printf("Invalid Conditions");
    return 0;
}