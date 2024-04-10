// inverse pyramid
#include<stdio.h>
int main(){
    int b,a=1;
    printf("Enter the Number:  ");
    scanf("%d",&b);
    for (int i=0;i<b;i++){
        for (int j=0;j<i;j++){
            printf(" "); 
        }
        for (int j=b-i;j>0;j--){
            printf("* "); 
        }
        a+=2;
        printf("\n");
    }
    return 0;
}
