main()
{
    int a, b, i, x, y, lcm = 1;

    printf("\nHCF of two numbers\nenter two numbers : ");
    scanf("%d%d", &a, &b);
    for (i = 2; i <= a && i <= b;)
    {
        if (a % i == 0 && b % i == 0)
        {
            lcm *= i;
            a /= i;
            b /= i;
            printf(" *%d", i);
        }
        else
            i++;
        // printf("\n%d    %d  %d", lcm, a, b);
    }
    lcm *= a * b;
    printf(" *%d *%d = *%d", a, b, lcm);
}


// 2 10 2 20 5 2 10 5

//     2 5 2 2 5
