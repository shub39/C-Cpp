#include<stdio.h>
int main(){
    int n;
    int i;
    printf("Enter N:  ");
    scanf("%d",&n);
    for(i=n;i<=n*10;i=n+i){
        printf("%d ",i);
    }
    return 0;
}