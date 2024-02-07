#include<stdio.h>
void main(){

    int limit;

    printf("Enter the limit: ");
    scanf("%d",&limit);

    for(int i=1; i<=limit;i++){
        for(int j=1; j<=limit*2-1;j++){
            if(i==1 || j== i|| j==limit*2-i)
                printf("*");
                    else
                        printf("_");
        }
                            printf("\n");
    }
}