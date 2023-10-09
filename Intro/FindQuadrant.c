//Find the quadrant of a given pair of coordinates
#include<stdio.h>
int main(){
    float x;
    printf("Enter x :");
    scanf("%f",&x);
    float y;
    printf("Enter y :");
    scanf("%f",&y);
    if(x==0 && y==0) printf("Origin"); 
    else if(x>0 && y>0) printf("1st Quadrant");
    else if(x>0 && y<0) printf("2nd Quadrant");
    else if(x<0 && y<0) printf("3nd Quadrant");
    else if(x<0 && y>0) printf("4nd Quadrant");
    return 0;
}