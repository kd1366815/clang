#include<stdio.h>
main()
{
	char i;
	
	printf("1文字入力？");
	scanf("%s", &i);

	if (i <= 90 && i >= 65 || i <= 108 && i>=97)
	{

	}
	else {
		printf("ELLOR");
	}
}