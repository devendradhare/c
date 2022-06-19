main()
{
    int n;
    printf("days in month\nenter month number : ");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("month name = january\ndays = 31");
        break;
    case 2:
        printf("month name = fabruary\ndays = 30");
        break;
    case 3:
        printf("month name = march\ndays = 31");
        break;
    case 4:
        printf("month name = april\ndays = 30");
        break;
    case 5:
        printf("month name = may\ndays = 31");
        break;
    case 6:
        printf("month name = june\ndays = 30");
        break;
    case 7:
        printf("month name = july\ndays = 31");
        break;
    case 8:
        printf("month name = august\ndays = 31");
        break;
    case 9:
        printf("month name = septembar\ndays = 30");
        break;
    case 10:
        printf("month name = october\ndays = 31");
        break;
    case 11:
        printf("month name = novembar\ndays = 30");
        break;
    case 12:
        printf("month name = desember\ndays = 31");
        break;
    default:
        printf("invelid input");
        break;
    }
    getch();
}