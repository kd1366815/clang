#include<stdio.h>
main()
{
	int su, i;
	printf("”‚ÍH");
	scanf("%d", &su);
	do {
		i = 0;
		do {
			printf("*");
			i++;
		} while (i < 5);
		printf("\n");
		su--;
	} while (su > 0);
}