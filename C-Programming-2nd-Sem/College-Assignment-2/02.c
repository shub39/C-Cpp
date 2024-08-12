// 2. WAP to check whether a year leap year or not
#include<stdio.h>
int main(){
  int f;
  printf("Enter the Year :");
  scanf("%d",&f);
  if (f%400==0 || (f%4==0 && f%100!=0 )) {
    printf("Leap Year\n");
    return 0;
  }
  printf("Not Leap Year\n");
  return 0;
}
