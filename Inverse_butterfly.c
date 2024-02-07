

#include<stdio.h>
void main(){

    int i, j, k=1;
    for(i=1; i<=9; i++){
        for(j=0; j<=9; j++){

            if(j>=k && j<=9-k)
                printf("_");                 
                       
                else
                printf("*");              
               }

               if(i>=5)
               k--;
               else
               k++;
                        
            printf("\n");
        }
    }



