#include<stdio.h>
int main(){
    int b;
    printf("Enter the Number:  ");
    scanf("%d",&b);
    int k = 1;
    for (int i=1;i<=b;i++){
        for (int j=0;j<i;j++){
            printf("%d ",k);
        }
        k+=2;
        printf("\n");
    }
    return 0;
}
/*
1 
3 3 
5 5 5 
7 7 7 7 
9 9 9 9 9 
*/
