#include<stdio.h>
main()
{
	int su;
	printf("��������:");
	scanf("%d", &su);
	while (su>0) { //while(su)�ł�����
		printf("*");
		su--;
	}
}