#include<stdio.h>
main()
{
	int s, i, d[11] = { 10,5,30,77,16,3,47,29,37,33};

	printf("�T���l����́F");
	scanf("%d", &s);
	
	//�ԕ����d����
	d[10] = s;

	for (i = 0; s != d[i]; i++)
	{

	}

	if (i >= 10) {
		printf("������Ȃ�����\n");
	}
	else {
		printf("d[%d]�ɂ�����\n", i);
	}
}