#include<stdio.h>
main()
{
	int su,sum,i;
	
	sum = 0;
	i = 0;
	do {

		printf("����(-999�ŏI��)?");
		scanf("%d", &su);
		if (su != -999)
		{
			sum += su;
			i++;
		}
	} while (su != -999);
	printf("���v=%d\n", sum);
	printf("����=%.6f", sum / (float)i);
}