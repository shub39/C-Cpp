//Check if Input is prime or not
#include<stdio.h>
#include<stdbool.h>//For Boolean data types
int main(){
    int n;
    printf("Enter The Number: ");
    scanf("%d",&n);
    bool flag=true;//means number is prime
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=false;//Means number is composite
            break;
        }
    }
    if(n==1) printf("%d is neither prime nor composite",n);
    else if(flag==true) printf("%d is prime",n);
    else printf("%d is composite",n);
    return 0;
}