#include<stdio.h>
int main(){
  int b;
  printf("Enter the Number:  ");
  scanf("%d",&b);
  for (int i = 0; i <= b; i++){
    for (int j = 0; j <= b + 1 -i; j++){
      printf("%d ", j);
    }
    printf("\n");
  }
  return 0;
}

/*

0 1 2 3 4 5 
0 1 2 3 4 
0 1 2 3 
0 1 2 
0 1 

*/
