#include<stdio.h>
int main(){
    int b;
    printf("Enter the Number:  ");
    scanf("%d",&b);
    for (int i=1;i<=b;i++){
        for (int j=0;j<i;j++){
            printf("%d ",j + 1);
        }
        printf("\n");
    }
    return 0;
}

/*

1 
1 2 
1 2 3 
1 2 3 4 

*/
