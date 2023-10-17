//Display the Higest factor of an input(N)
#include<stdio.h>
int main(){
    int n;
    int hf=1;
    printf("Enter N:  ");
    scanf("%d",&n);
    for(int i=n/2;i>=1;i--){
        if(n%i==0){
            hf=i;
            printf("Highest Factor is:%d ",hf);
            break;
        }
    }
    return 0;
}
