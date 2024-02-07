#include <stdio.h>
void main()
{

    int limit, i, j, k;

    printf("Enter the limit:");
    scanf("%d", &limit);

    for (i = 1; i <= limit; i++)
    {

        for (j = 1; j <= (i * i) * 2; j++)
        {
            printf("*");
            if (j % (2 * i)==0)
                printf("\n");
        }

        for (k = 1; k <= limit; k++)
        {
            printf("*\n");
            if (i == limit)
                break;
        }
    }
}
