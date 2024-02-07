#include<stdio.h>
void main(){

    int limit,j,i,k=0;

    printf("Enter the limit: ");
    scanf("%d",&limit);

    for(i=1;i<=limit*2;i++){
        for(j=1; j<=limit*2; j++){
             if(j>limit-k && j<limit+k+1)
                printf("-");
                else
                printf("*");

             
        }
        if(i>limit){
            k--;
            
        }
        else if(i==limit){
            k==limit-1;
        }
        else
            k++;
        
        printf("\n");
    }
}