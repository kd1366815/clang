#include<stdio.h>
void su(int d1, int d2, int d3,int * max,int *min);

main()
{
	int d1, d2, d3, max, min;

	printf("整数を3つ入力：");
	scanf("%d%d%d", &d1, &d2, &d3);

	su(d1, d2, d3, &max, &min);

	printf("最大値＝%d  最小値＝%d\n", max, min);
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