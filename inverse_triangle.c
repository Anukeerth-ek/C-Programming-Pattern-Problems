#include<stdio.h>
void main(){
    
    int limit ,i,j,k,m=0;
    printf("Enter a limit:");
    scanf("%d",&limit);
    
    for(i=1;i<=limit*2-1;i++){
        k=1;
        if(i<=5)
        m++;
        else
        m--;
    
        for(j=1;j<=limit*2-1;j++){
            if (j>=limit+1-m && j<=limit-1+m){
                printf("%d",k);
                k++;
              
            }
             
                else
                printf(" ");
                  
        }
        printf("\n");
        
    }
}
