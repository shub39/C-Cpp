// 4. WAP to find out largest number among three number
#include<stdio.h>
int main(){
    int a;
    printf("Enter Number 1 :");
    scanf("%d",&a);
    int b;
    printf("Enter Number 2 :");
    scanf("%d",&b);
    int c;
    printf("Enter Number 3 :");
    scanf("%d",&c);

    if(a>b){
        if(a>c) printf("%d is the Greatest",a);
        else printf("%d is the Greatest",c);
    }
    else{
        if(b>c) printf("%d is the Greatest",b);
        else printf("%d is the Greatest",c);
    }
    return 0;
}
