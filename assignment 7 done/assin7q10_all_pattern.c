#include <stdio.h>
main()
{
	int i,j,k,n,a,l,g;
    printf("all star pattern\n");
    printf("enter number of lines : ");
	scanf("%d",&n);

	printf("\nstar pettern 1\n");
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}


	printf("\nstar pattern 2 \n");

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i <= j)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	printf("\nstar pattern 3 \n");

	for (i = 1; i <= n; i++)
	{
		for (j = n; j >= 1; j--)
		{
			if (i < j)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
    }

	printf("\nstar pattern 4 \n");

	for (i = 1; i <= n; i++)
	{
		for (j = 1, k = n * 2 - 1; j <= n * 2 - 1; j++, k--)
		{
			if (j >= i && k >= i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

    printf("\nstar pattern 5 \n");
    for (i = n; i >= 1; i--)
    {
        for (j = 1, k = n * 2 - 1; j <= n * 2 - 1; k--, j++)
        {
            if (i <= j && i <= k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
	printf("\nstar pattern 6 \n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
    printf("\nstar pattern 7 \n");
    for (i = n; i >= 1; i--)
    {
        k = 0;
        a = 'A';
        for (j = 1;;)
        {
            if (j > i)
                printf(" ");
            else
                printf("%c", a);
            if (j == n || k == 1)
            {
                k = 1;
                j--;
                a--;
                if (j <= 0)
                    break;
            }
            else
            {
                j++;
                a++;
            }
        }
        printf("\n");
    }

    printf("\nstar pattern 8\n");
    g = n;
    for (i = 1; i <= n; i++)
    {
        k = 0;
        g--;
        for (l = g; l >= 1; l--)
        {
            printf(" ");
        }
        for (j = 1;;)
        {
            printf("%d", j);
            if (j == i || k == 1)
            {
                k = 1;
                j--;
                if (j <= 0)
                {
                    break;
                }
            }
            else
            {
                j++;
            }
        }
        printf("\n");
    }
	printf("\nstar pattern 9\n");
	for (i = 1; i <= n; i++)
	{
		for (j = n; j >= 1; j--)
		{
			if (i < j)
				printf(" ");
			else
				printf("* ");
		}
		printf("\n");
	}

	getch();
}
