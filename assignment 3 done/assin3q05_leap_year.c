main()
{
    int year;
    printf("check year is leap year or not\nente year : ");
    scanf("%d",&year);

    if(year%400==0||year%100&&year%4==0)
        printf("%d is a leap year",year);
    else
        printf("%d is not a leap year",year);
}
