#include<stdio.h>
void main(){

    int limit ,i,j,k=1,l; 

    printf("Enter the limit: ");
    scanf("%d",&limit);

    for(i=1; i<=limit; i++){
        for(j=1;j<=limit; j++){
            if(i%2!=0){
                printf("%d",k);
                k++;
            }
        else{
            printf("%d",k);
            k--;
        }
        l=j;
        }
        if(i%2==0)
        k+=l-1;
        else
        k+=l-1;

        printf("\n");
    }
}