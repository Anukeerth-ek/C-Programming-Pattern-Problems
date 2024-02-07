

#include <stdio.h>
void main()
{
    int limit, j, i;
    int k, l;
    int m = 3, n = 0;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    for (i = 1; i <= limit * 2 - 1; i++)
    {
        l = 1;
        for (j = 1; j <= limit * 2 - 1; j++)
        {
            if (j == limit - k || j == limit + n)
            {
                if (j == limit - k)
                    printf("%c", 64 + l);
                else
                {
                    printf("%c", 64 + m);
                    if (i >= limit)
                        m -= 2;
                    else
                        m += 2;
                }
            }
            else
                printf("_");
        }
        if (i >= limit)
        {
            k--;
            n--;
        }
        else
        {
            k++;
            n++;
        }
        printf("\n");
    }
}
