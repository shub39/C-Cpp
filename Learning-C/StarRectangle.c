//Print a star rectangle of input dimensions
#include<stdio.h>
int main(){
    int l;
    printf("Enter the length:  ");
    scanf("%d",&l);
    int b;
    printf("Enter the breadth:  ");
    scanf("%d",&b);
    for (int i=1;i<=b;i++){
        for (int j=1;j<=l;j++){
            if ( i==1 || j==1 || i==b || j==l) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}