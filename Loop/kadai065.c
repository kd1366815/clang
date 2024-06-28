#include<stdio.h>
main()
{
	int su,sum,i;
	
	sum = 0;
	i = 0;
	do {

		printf("®”(-999‚ÅI—¹)?");
		scanf("%d", &su);
		if (su != -999)
		{
			sum += su;
			i++;
		}
	} while (su != -999);
	printf("‡Œv=%d\n", sum);
	printf("•½‹Ï=%.6f", sum / (float)i);
}