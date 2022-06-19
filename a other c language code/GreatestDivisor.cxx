#include <stdio.h>
int main()
{
// this code is I submitted in mysirg.codar.com
	int ui, a;
	scanf("%d", &ui);
	a = ui / 2;
	for (int i = 0; i < a; a--)
	{
		if (ui % a == 0)
		{
			printf("%d", a==1?a=-1:a);
			break;
		}
	}
}