// Inverse Number Pyramid
#include<stdio.h>
int main(){
    int b;
    printf("Enter the Number:  ");
    scanf("%d",&b);
    for (int i=1;i<=b;i++){
        int k = 1;
        for (int j=1;j<=b-i;j++){
            printf("  ");
            k++;
        }
        for (int j=1;j<=i;j++){
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
