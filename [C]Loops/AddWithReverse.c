//Print the sum of input n and its reverse
#include<stdio.h>
int main(){
    int n,rev=0,x;
    printf("Enter The number:  ");
    scanf("%d",&n);
    int con=n;
    while(n>0){
        x=n%10;
        n/=10;
        rev=rev*10+x;
    }
    printf("The sum of input and its reverse is %d",rev+con);
    return 0;
}

