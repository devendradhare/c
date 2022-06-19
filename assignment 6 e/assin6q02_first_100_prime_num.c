#include <stdio.h>
int main()
{
	int n=1, i, a = 1000;

	while (a >= 1)
	{
		for (i = a / 2; i >= 2; i--)
		{
			if (a % i == 0)
				break;
		}
		if (i == 1)
			printf("  (%d)  %d\n",n++,a);
		a--;
	}
}