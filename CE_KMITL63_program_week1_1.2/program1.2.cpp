#include<stdio.h>
int main()
{
	int a,sum = 0;
	for(a = 1; a < 1000; a++)
	{
		if (a % 3 == 0 || a % 5 == 0 && a % 15 != 0 && a != 0)
		{
			sum += a;
		}
	}
	printf("sum = %d", sum);
	return 0;
}