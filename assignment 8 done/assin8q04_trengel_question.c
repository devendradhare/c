main()
{
    int a, b, c;
    char n;
    while (1)
    {
        printf("select one\na. isoscels triangle\nb. right angle triangle\nc. equilateral triangle\ne. exit\n");
        scanf("%c", &n);
        switch (n)
        {
        case 'a':
            printf("\nisoscels triangle\nenter sides of triangle : ");
            scanf("%d%d%d", &a, &b, &c);
            if (a == b || b == c || c == a)
            {
                printf("yes, it is isoscals triangle\n");
            }
            else
            {
                printf("no, it is not isoscals triangle\n");
            }
            printf("\npress any key to continue\n");
            getch();
            break;
        case 'b':
            printf("\nright angle triangle\nenter sides of triangle AB, BC and CA : ");
            scanf("%d%d%d", &a, &b, &c);
            if (a > b)
            {
                if (a > c)
                {
                    if (a * a == b * b + c * c)
                        printf("yes, it is right angle triangle\n");
                    else
                        printf("no, is is not right angle triangle\n");
                }
                else
                {
                    if (b * b == a * a + c * c)
                        printf("yes, it is right angle triangle\n");
                    else
                        printf("no, is is not right angle triangle\n");
                }
            }
            else
            {
                if (b > c)
                {
                    if (b * b == a * a + c * c)
                        printf("yes, it is right angle triangle\n");
                    else
                        printf("no, is is not right angle triangle\n");
                }
                else
                {
                    if (c * c == a * a + b * b)
                        printf("yes, it is right angle triangle\n");
                    else
                        printf("no, is is not right angle triangle\n");
                }
            }
            printf("\npress any key to continue\n");
            getch();
            break;
        case 'c':
            printf("\nequilateral triangle\nenter sides of triangle AB, BC and CA : ");
            scanf("%d%d%d", &a, &b, &c);
            if (a == b && b == c && c == a)
                printf("yes, it is right angle triangle\n");
            else
                printf("no, is is not right angle triangle\n");
            printf("\npress any key to continue\n");
            getch();
            break;
        case 'e':
            printf("\nexit");
            exit(0);
        default:
            printf("\ninvalid input\n");
            printf("\npress any key to continue\n");
            getch();
            break;
        }
    }
}