int main()
{
    int rn=0, n;
    printf("revese number\nenter a number : ");
    scanf("%d",&n);

    while (1)
    {
        rn += n%10;
        rn *= 10;
        n /= 10;
        if (n<=10)  
        {
            rn += n;
            break;
        }
        
    }
    printf("%d",rn);
}
