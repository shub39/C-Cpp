//find profit or loss
#include<stdio.h>
int main(){
    float cp;
    float sp;
    printf("Enter Cost Price :");
    scanf("%f",&cp);
    printf("Enter Selling Price :");
    scanf("%f",&sp);
    if (cp<sp){
        printf("Profit of %f",sp-cp);
    }
    if (cp>sp){
        printf("Loss of %f",cp-sp);
    }
    if (cp==sp){
        printf("No Profit Or Loss");
    }
    return 0;
}
