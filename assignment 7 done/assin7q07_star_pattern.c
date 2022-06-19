/*
ABCDCBA
ABC CBA 
AB   BA 
A     A 
*/
main()
{
    int i, j, n, k, a = 'A';
    printf("star pattern \nenter number of lines : ");
    scanf("%d", &n);

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
}