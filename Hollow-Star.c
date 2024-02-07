#include<stdio.h>
void main(){

    int limit,k=0,l=0;
    printf("Enter the limit: ");
    scanf("%d",&limit);

    for(int i=1; i<=limit*2-1; i++){
        for(int j=1 ; j<=limit*2-1;j++){
            if(j==limit-k || j==limit+l)
                printf("*");
            else
                printf("_");
        }
                if(i>=limit){
                    k--;
                    l--;
                }
                else{
                    k++;
                    l++;
                }
        
        printf("\n");
    }
}