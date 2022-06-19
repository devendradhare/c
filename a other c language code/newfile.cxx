#include <stdio.h>
int main(int argc, char *argv[])
{
	int j, k, i;
	printf("size of arr  :   ");
	scanf("%d", &i);
	int arr[i];
	j = i;
	for (i; i > 0; i--)
	{
		printf("%dth item : ", i);
		scanf("%d", &arr[i]);
	}
	for (j; j > 0; j--)
	{
		i = arr[j] % 2;
		k = arr[j] % 3;
		if (i == 0 || k == 0)
		{
			if (i == 0 && k == 0)
			{
			}
			else
			{
				printf("\n%d", arr[j]);
			}
		}
	}

	printf("\nend");
}