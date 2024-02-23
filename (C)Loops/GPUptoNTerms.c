//Display the GP- 3,12,48... upto n(Input) terms
#include<stdio.h>
int main(){
    int n;
    printf("Enter N:  ");
    scanf("%d",&n);
    int a=3;
    for(int i=1;i<=n;i++){
        if(a==3){//For Printing First 3
            printf("%d ",a);
        }
        a=a*4;
        printf("%d ",a);
    }
    return 0;
}