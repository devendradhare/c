main()
{
	int a,b,c;
	printf("Enter three numbers a, b and c: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		if(a>c)
			printf("%d a is greater",a);
		else
			printf("%d c is greater",c);
	}
	else{
		if(b>c)
			printf("%d b is greater",b);
		else
			printf("%d c is greater",c);
	}
}
