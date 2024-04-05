#include<stdio.h>
int main(){
    int b;
    printf("Enter the Number:  ");
    scanf("%d",&b);
    for (int i=1;i<=b;i++){
        for (int j=0;j<i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

/*

0 
0 1 
0 1 2 
0 1 2 3

*/
