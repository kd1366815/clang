#include<stdio.h>
void su(int d1, int d2, int d3,int * max,int *min);

main()
{
	int d1, d2, d3, max, min;

	printf("®”‚ð3‚Â“ü—ÍF");
	scanf("%d%d%d", &d1, &d2, &d3);

	su(d1, d2, d3, &max, &min);

	printf("Å‘å’l%d  Å¬’l%d\n", max, min);
}

void su(int d1, int d2, int d3, int* max, int* min)
{
	if (d1 > d2 && d1 > d3)
	{
		*max = d1;
	}
	if (d2 > d1 && d2 > d3)
	{
		*max = d1;
	}
	if (d3 > d1 && d3 > d2)
	{
		*max = d3;
	}
	if (d2 < d1 && d2 < d3)
	{
		*min = d2;
	}
	if (d1< d2 && d1 < d3)
	{
		*min = d1;
	}
	if (d3 < d1 && d3 < d2)
	{
		*min = d3;
	}
}