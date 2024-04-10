//Print the reverse of digits of input n
#include<stdio.h>
int main(){
    int n,rev=0,x;
    printf("Enter The number:  ");
    scanf("%d",&n);
    while(n>0){
        x=n%10;
        n/=10;
        rev=rev*10+x;
    }
    printf("The reverse of digits is %d",rev);
    return 0;
}

