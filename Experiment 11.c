#include<stdio.h>
int main()
{
    int i, j, k, n;
    printf("Enter the value of row & column: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("* ");
        }
        for(k=1; k<=4*(n-i); k++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=n-1; i>=1; i--){
        for(j=1; j<=i; j++){
            printf("* ");
        }
        for(k=1; k<=4*(n-i); k++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
