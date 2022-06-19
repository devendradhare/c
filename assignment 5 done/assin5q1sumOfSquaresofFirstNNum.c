main()
{
	int a,i=1,s=0;
	printf("Enter a number : ");
	scanf("%d",&a);

	while(i<=a){
		s += i*i;
		printf("%d+",i*i);
		i++;
	}
		printf("\nsum of squares of first %d netural numbers = %d",a,s);
}
