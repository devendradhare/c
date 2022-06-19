main()
{
	int h,e,p,c,b,r,t;
	printf("enter marks of 5 subject : ");
	scanf("%d%d%d%d%d",&h,&e,&p,&c,&b);
	t = h+e+p+c+b;
	r = t/5;

	printf("	total marks = %d\n",t);
	printf("	precenteg   = %d%%\n",r);

	if(r>80)
		printf("			A gread");
	else if(r>60)
		printf("			B gread");
	else if(r>40)
		printf("			C gread");
	else
		printf("			D gread");
    getch();
}
