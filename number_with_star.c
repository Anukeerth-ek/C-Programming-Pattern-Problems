

#include <stdio.h>
void main()
{

    int limit, i, j, k = 1, l = 1;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    for (i = 1; i <= limit * 2; i++)
    {
        for (j = 1; j <= l; j++)
        {
            if (j % 2 == 0)
            {
                printf(" * ");
            }
            else
            {
                printf("%d", k);
            }
        }
        if (j >= limit + 1)
        {
            l -= 2;
        }
        else
        {
            l += 2;
        }
        printf("\n");
    }
}