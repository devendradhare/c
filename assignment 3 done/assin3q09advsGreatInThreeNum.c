main()
{
	int a,b,c;
	printf("Enter any three numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	printf("%d is greater", a>b? a>c?a:c : b>c?b:c);
}
