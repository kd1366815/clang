#include<stdio.h>
main()
{
	int i, s, d[10] = { 10,5,30,77,16,3,47,29,37,33 };

	printf("�T���l����͂��Ă���������");
	scanf("%d", &s);
	
	for (i = 0; i < 10; i++)
	{
		if (s == d[i]) 
		{
			if (i >= 10)
			{
				printf("������Ȃ�����");
			}
			else {
				printf("�z���%d�ԖڂɌ�������", i);
			}
		}
	}

}