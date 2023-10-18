//Print a star plus (input is odd)
#include<stdio.h>
int main(){
    int b;
    printf("Enter the odd Number:  ");
    scanf("%d",&b);
    int a=(b/2)+1;
    for (int i=1;i<=b;i++){
        for (int j=1;j<=b;j++){
            if (i==a || j==a) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}