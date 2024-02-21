//Display the AP - 1,3,5,7,9... upto n(Input) terms
#include<stdio.h>
int main(){
    int n;
    int i;
    printf("Enter N:  ");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i=i+2){
        printf("%d ",i);
    }
    return 0;
}