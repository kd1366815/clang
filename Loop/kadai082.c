#include<stdio.h>
main()
{
	int su, sum, i;
	sum = 0;
	i = 0;

	printf("整数(-999で終了)？");
	scanf("%d", &su);
	sum += su;
	i++;

	while (1)
	{
		if (su == -999)
		{
			break;
		}
		printf("整数(-999で終了)？");
		scanf("%d", &su);
		if (su < 0)
		{
			continue;
		}
		sum += su;
		i++;
	}
	printf("合計＝%d\n平均＝%.3f", sum, sum / (float)i);
}