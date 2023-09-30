//Find the Area and perimeter of a rectangle and print which one is greater
#include<stdio.h>
int main(){
    float length;
    float breadth;
    float area;
    float perimeter;
    printf("Enter Length: ");
    scanf("%f",&length);
    printf("Enter Breadth: ");
    scanf("%f",&breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    if(area>perimeter){
        printf("Area is greater than perimeter.");
    }
    else{
        printf("Perimeter is greater than Area.");
    }
    return 0;
}