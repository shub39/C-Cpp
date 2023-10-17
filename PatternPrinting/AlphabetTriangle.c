//Print an alphabet triangle
#include<stdio.h>
int main(){
    int b;
    printf("Enter the Number:  ");
    scanf("%d",&b);
    for (int i=1;i<=b;i++){
        for (int j=1;j<=i;j++){
            printf("%c ",(char)j+64);
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
//         for (int j=1;j<=i;j++){
//             printf("%c ",(char)i+64);
//         }
//         printf("\n");
//     }
//     return 0;
// }