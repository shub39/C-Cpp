//Print a mixed triangle
#include<stdio.h>
int main(){
    int b;
    printf("Enter the Number:  ");
    scanf("%d",&b);
    for (int i=1;i<=b;i++){
        if(i%2==0){
            for (int j=1;j<=i;j++) printf("%c ",(char)j+64);
        }
        else{
            for (int j=1;j<=i;j++) printf("%d ",j);
        }
        printf("\n"); 
    }          
    return 0;
}

//Transpose
// #include<stdio.h>
// int main(){
//     int b;
//     printf("Enter the Number:  ");
//     scanf("%d",&b);
//     for (int i=1;i<=b;i++){
//         if(i%2==0){
//             for (int j=1;j<=i;j++) printf("%c ",(char)i+64);
//         }
//         else{
//             for (int j=1;j<=i;j++) printf("%d ",i);
//         }
//         printf("\n"); 
//     }          
//     return 0;
// }
