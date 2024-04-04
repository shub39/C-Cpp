// Print a Half Pyramid
#include<stdio.h>
int main(){
    int b;
    printf("Enter the Number:  ");
    scanf("%d",&b);
    for (int i=1;i<=b;i++){
        for (int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
