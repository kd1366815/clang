#include<stdio.h>
main()
{
	int data, sum = 0;
	int cnt = 0;
	int ret;
	
	printf("�����F");
	ret=scanf("%d", &data);

	while (ret != EOF)
	{
		sum += data;
		cnt++;
		
		printf("�����F");
		ret = scanf("%d", &data);
	}
	printf("���v=%d ����=%.2f", sum, (float)sum / cnt);
}