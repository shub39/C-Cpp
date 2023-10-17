//Print the factorial of upto input n
#include<stdio.h>
int main(){
    int n,sum=1;
    printf("Enter The number:  ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum*=i;
        printf("\n%d",sum);
    }
    return 0;
}

