// Number half reverse pyramid
#include<stdio.h>
int main(){
    int b,a=1;
    printf("Enter the Number:  ");
    scanf("%d",&b);
    for (int i=0;i<b;i++){
        int k = 1;
        for (int j=0;j<i;j++){
            printf("  "); 
            k++;
        }
        for (int j=b-i;j>0;j--){
            printf("%d ", k); 
            k++;
        }
        a+=2;
        printf("\n");
    }
    return 0;
}
