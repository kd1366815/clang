#include<stdio.h>
main()
{
	int i,sum;
	i = 1;
	sum = 0;
	do {
		printf("%d", i);
		sum += i;
		i++;
		if (sum <= 300)
		{
			printf("+");
		}
	} while (sum <= 300);
	printf("=%d", sum);
}