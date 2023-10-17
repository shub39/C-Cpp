//Print aplphabets upto input n, n times (given input is less than 26)
#include<stdio.h>
int main(){
    int b;
    printf("Enter the Number:  ");
    scanf("%d",&b);
    for (int i=1;i<=b;i++){
        for (int j=1;j<=b;j++){
            printf("%c ",(char)j+64);
        }
        printf("\n");
    }
    return 0;
}

// transpose
// #include<stdio.h>
// int main(){
//     int b;
//     printf("Enter the Number:  ");
//     scanf("%d",&b);
//     for (int i=1;i<=b;i++){
//         for (int j=1;j<=b;j++){
//             printf("%c ",(char)i+64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

