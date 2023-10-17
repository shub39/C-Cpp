//Print the factorial of input n
#include<stdio.h>
int main(){
    int n,sum=1;
    printf("Enter The number:  ");
    scanf("%d",&n);
    while(n>0){
        sum*=n--;
    }
    printf("n!=%d",sum);
    return 0;
}

