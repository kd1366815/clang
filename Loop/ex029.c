#include<stdio.h>
main()
{
	int su, i;
	printf("��������:");
	scanf("%d", &su);
	i = 0;
	while (i < su) {
		printf("*");
		i++;//i=i+1; ���́@i+=1;�ł�ok
	}
}