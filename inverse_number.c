#include<stdio.h>
void main(){

    int limit ,i ,j , k;

    
    printf("Enter the limit: ");
    scanf("%d" , &limit);

    

    for( i = 1; i <= limit; i++){
        k = i;
        if(i > limit)
        k--;
        for( j = 1; j <= i ; j++){
            if ( j <= k)
            printf("%d " ,j);
            else
            printf(" ");
          
          
           
        }
        printf("\n");
    }
}