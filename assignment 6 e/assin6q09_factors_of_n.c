#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,i=1;
	printf("factors of N\nenter N : ");
	scanf("%d",&n);
	
	while(i<=n){
		if(n%i==0)
			printf(" %d, ",i);
		i++;
	}
}