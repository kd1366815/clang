#include<stdio.h>
main()
{
	int su, sum, i;
	sum = 0;
	i = 0;

	printf("����(-999�ŏI��)�H");
	scanf("%d", &su);
	sum += su;
	i++;
	while (1)
	{
		printf("����(-999�ŏI��)�H");
		scanf("%d", &su);
		if (su == -999)
		{
			break;
		}
		sum += su;
		i++;
	}
	printf("���v��%d\n���ρ�%.3f", sum, sum / (float)i);
}