//Print Floyds triangle
#include<stdio.h>
int main(){
    int b,a=1;
    printf("Enter the Number:  ");
    scanf("%d",&b);
    for (int i=1;i<=b;i++){
        for (int j=1;j<=i;j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}

// Floyds square
// #include<stdio.h>
// int main(){
//     int b,a=1;
//     printf("Enter the Number:  ");
//     scanf("%d",&b);
//     for (int i=1;i<=b;i++){
//         for (int j=1;j<=b;j++){
//             printf("%d ",a);
//             a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Print RevFloyds triangle
// #include<stdio.h>
// int main(){
//     int b,a=1;
//     printf("Enter the Number:  ");
//     scanf("%d",&b);
//     for (int i=1;i<=b;i++){
//         for (int j=1;j<=b+1-i;j++){
//             printf("%d ",a);
//             a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }