#include<stdio.h>
main()
{
	char su ;
	int i;
	printf("アルファベット小文字？");
	scanf("%c", &su);
	for (i = su-31 ; i>=65&&i  <= 90; i++)
	{
		printf("%c ", i);
	}
	printf("\n");
}