#include<stdio.h>
main()
{
	char data[100];
	int i;

	printf("������́H");
	scanf("%s", &data[0]);

	for (i = 0; data[i] != '\0'; i++)
	{
	}
	printf("������%s\n", &data[0]);
	printf("��������%d\n", i);
}