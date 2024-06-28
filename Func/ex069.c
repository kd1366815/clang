#include<stdio.h>
main()
{
	int data, sum = 0;
	int cnt = 0;
	int ret;
	
	printf("®”F");
	ret=scanf("%d", &data);

	while (ret != EOF)
	{
		sum += data;
		cnt++;
		
		printf("®”F");
		ret = scanf("%d", &data);
	}
	printf("‡Œv=%d •½‹Ï=%.2f", sum, (float)sum / cnt);
}