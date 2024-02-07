#include <stdio.h>
void main()
{

    int limit, i, j, k;

    printf("Enter the limit:");
    scanf("%d", &limit);

    for (i = 1; i <=limit; i++)
    {
        k = 1;
        for (j = 1; j < limit + i; j++)
        {
            if (j <= limit - i )
                printf(" ");
            else
            {
                printf("%c", 64 + k);
                k++;
            }
        }
        printf("\n");
    }
}