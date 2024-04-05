#include<stdio.h>
int main(){
  int b;
  printf("Enter the Number:  ");
  scanf("%d",&b);
  for (int i = 0; i <= b; i++){
    for (int j = b + 1 - i; j >= 0; j--){
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}

/*

* * * * * * 
* * * * * 
* * * * 
* * * 
* * 

*/
