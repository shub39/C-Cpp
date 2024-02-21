//Print the sum of digits of input n
#include<stdio.h>
int main(){
    int n,sum=0,x;
    printf("Enter The number:  ");
    scanf("%d",&n);
    while(n>0){
        x=n%10;
        n/=10;
        sum+=x;
    }
    printf("The sum of digits is %d",sum);
    return 0;
}

