#include<stdio.h>
main()
{
	int su, sum, i;
	printf("®”(-999‚ÅI—¹)?");
	scanf("%d", &su);
	sum = 0;
	i = 0;
	while (su != -999) {
		sum += su;
		printf("®”(-999‚ÅI—¹)?");
		scanf("%d", &su);
		i++;
	}
	printf("‡Œv%d\n•½‹Ï%.2f", sum, sum / (float)i);
}