//Print an odd number Triangle
#include<stdio.h>
int main(){
    int b;
    printf("Enter the Number:  ");
    scanf("%d",&b);
    for (int i=1;i<=b;i++){
        int a=1;
        for (int j=1;j<=i;j++){
            printf("%d ",a);
            a+=2;
        }
        printf("\n");
    }
    return 0;
}