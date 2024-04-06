#include<stdio.h>
int main(){
    int b;
    printf("Enter the Number:  ");
    scanf("%d",&b);
    for (int i=1;i<=b;i++){
        for (int j=b-i;j>=0;j--){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}

/*

1 1 1 1 
2 2 2 
3 3 
4 

*/
