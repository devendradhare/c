#include <stdio.h>
int main()
{
	int ui, a;
	printf("greatest divisior of any number\nenter 1 for exist\n");
	for (int i = 0;;)
	{
		printf("enter a number : ");
		scanf("%d", &ui);
		
		if (ui == 1)
			break;
			
		a = ui / 2;
		for (int i = 0; i < a; a--)
		{
			if (ui % a == 0)
			{
				printf("greatest divisor of %d is %d\n",ui,a);
				break;
			}
		}
	}
}