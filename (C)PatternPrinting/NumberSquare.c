//Print numbers upto input n, n times
#include<stdio.h>
int main(){
    int b;
    printf("Enter the Number:  ");
    scanf("%d",&b);
    for (int i=1;i<=b;i++){
        for (int j=1;j<=b;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

//Here is a transpose pattern of above
// #include<stdio.h>
// int main(){
//     int b;
//     printf("Enter the Number:  ");
//     scanf("%d",&b);
//     for (int i=1;i<=b;i++){
//         for (int j=1;j<=b;j++){
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }
