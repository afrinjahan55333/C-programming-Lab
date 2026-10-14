#include<stdio.h>
int main()
{
    int i, j;
    int column = 13;
    for(i=1; i<=3; i++){
        for(j=1; j<=column; j++){
            if((i==1 || i==3) && (j-i)%4==0){
                printf("* ");
            }
            else if(i==2 && j%2==0){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
