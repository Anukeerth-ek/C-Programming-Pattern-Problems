#include<stdio.h>
void main(){
    

    int limit ,i,j,k=1,l=2,n=2;
    printf("Enter a limit:");
    scanf("%d",&limit);
    
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j==1)
                printf("%d",k);

                
                else if(j==i){
                    printf("%d",l);
                    l++;
                }

                else if(i==5){
                    printf("%d",n);
                    n++;
                }
                else
                printf(" ");
        }
        printf("\n");
    }

}