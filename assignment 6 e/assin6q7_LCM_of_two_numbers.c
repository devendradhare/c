main()
{
    int a, b, a1, b1, i, lcm = 1;
    printf("\nLCM of two numbers\nenter any two numbers : ");
    scanf("%d%d", &a, &b);
    a1 = a;
    b1 = b;
    for (i = 2; i <= a && i <= b;)
    {
        if (a % i == 0 && b % i == 0)
        {
            lcm *= i;
            a /= i;
            b /= i;
            printf(" *%d",i);
        }
        else
            i++;
        // printf("\n%d    %d  %d", lcm, a, b);
    }
    lcm *= a * b;
    printf(" *%d *%d = %d", a, b, lcm);
    printf("\nLCM of %d and %d is = %d\n", a1, b1, lcm);
}