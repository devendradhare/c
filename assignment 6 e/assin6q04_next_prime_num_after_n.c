main()
{
	int n,i,j;
	printf("next prime number of N\nenter N : ");
	scanf("%d",&n);
	for(i=n;1;i++){
		for(j=i/2;j>=2;j--){
			if(i%j==0)
				break;
		}
		if(j==1){
			printf("	  %d",i);
			break;
		}
	}
}
