//Print a Number pyramid palindrome
#include<stdio.h>
int main(){
    int b,o;
    printf("Enter the Number:  ");
    scanf("%d",&b);
    for (int i=1;i<=b;i++){
        for (int j=1;j<=b-i;j++){
            printf("  ");
        }
        for (int j=1;j<=i;j++){
            printf("%d ",j);
        }
        for (int j=i-1;j>0;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
