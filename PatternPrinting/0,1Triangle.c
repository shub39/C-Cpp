//Print 0,1 triangle 
#include<stdio.h>
int main(){
    int b;
    printf("Enter the Number:  ");
    scanf("%d",&b);
    for (int i=1;i<=b;i++){
        for (int j=1;j<=i;j++){
            if ((i+j)%2==0) printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
    return 0;
}