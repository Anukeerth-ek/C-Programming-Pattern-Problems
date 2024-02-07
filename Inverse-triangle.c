#include <stdio.h>
void main(){

int limit,k=1,i,j;
printf("enter the limit:");
scanf("%d",&limit);
for(i=1;i<=limit*2;i++){
    if(j==5|| j==6){
        k--;
    }
    
    
    for(j=1;j<=limit*2;j++){
        if(j<=limit+1-k|| j>=limit+k){
            printf("*");

        }
        else{
            printf("_");
        }
    }
    k++;
    printf("\n");
}
}
