//Count the number of digits in given input
#include<stdio.h>
int main(){
    int n;
    int count=0;
    printf("Enter The number:  ");
    scanf("%d",&n);
    while(n>0){
        n=n/10;
        count++;
    }
    printf("The number of digits is %d",count);
    return 0;
}
