#include<stdio.h>
main()
{
	int su, sum, i;
	printf("����(-999�ŏI��)?");
	scanf("%d", &su);
	sum = 0;
	i = 0;
	while (su != -999) {
		sum += su;
		printf("����(-999�ŏI��)?");
		scanf("%d", &su);
		i++;
	}
	printf("���v��%d\n���ρ�%.2f", sum, sum / (float)i);
}