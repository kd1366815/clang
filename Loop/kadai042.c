#include<stdio.h>
main()
{
	int su=1, sum=0;
	while (sum != 300)
	{
		printf("%d",su);
		sum += su;
		su++;
		if (sum <= 300)
		{
			printf("+");
		}
	}
	printf("=%d\n", sum);
}