main()
{
	int d,r,i=1;
	printf("digit count\nEnter a number : ");
	scanf("%d",&d);
	r=d;
	while(d>=10){
		d /= 10;
		i++;
		printf(".");
		
	}	
	
	printf("\n %d have %d digits",r,i);
}