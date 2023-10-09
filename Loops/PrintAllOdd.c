//Print All Odd Numbers Upto N
#include<stdio.h>
int main(){
    int i;
    int n;
    printf("Enter N:  ");
    scanf("%d",&i);
    for(n=1;n<=i;n=n+2){
        printf("%d ",n);
    }
    return 0;
}
//Continue fromn 5:13:00