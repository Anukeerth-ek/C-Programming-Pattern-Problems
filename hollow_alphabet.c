#include<stdio.h>
void main(){
    
    int limit,i,j,k=0;

    printf("Enter the limit: ");
    scanf("%d",&limit);

    for(i=1; i<=limit*2-1; i++){
        for(j=1; j<=limit*2-1;j++){
            
            
            if(j==limit-k || j==limit+k)
                printf("*");
         
           else
            printf(" ");
        
        }


       if(i>=limit ){
        k--;
        // l--;
       }
       else{
        k++;
        // l++;
       }
        
        printf("\n");
    }
}