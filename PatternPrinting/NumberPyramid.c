//Number Pyramid
#include<stdio.h>
int main(){
    int b,a=1;
    printf("Enter the Number:  ");
    scanf("%d",&b);
    for (int i=1;i<=b;i++){
        for (int j=1;j<=b-i;j++){
            printf("  "); 
        }
        for (int j=1;j<=a;j++){
            printf("%d ",j);
        }
        a+=2;
        printf("\n");
    }
    return 0;
}
