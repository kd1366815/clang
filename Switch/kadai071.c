#include<stdio.h>
main()
{
	int su1, su2;
	char en;

	printf("®”‚PH");
	scanf("%d", &su1);
	printf("®”‚QH");
	scanf("%d", &su2);
	printf("‰‰ZqH");
	scanf("%s", &en);
	
	switch (en)
	{
	case '+':
		printf("%d + %d = %d", su1, su2, su1 + su2);
		break;
	case'-':
		printf("%d - %d = %d", su1, su2, su1 - su2);
		break;
	case '*':
		printf("%d * %d = %d", su1, su2, su1 * su2);
		break;
	case '/':
		printf("%d / %d = %d", su1, su2, su1 / su2);
		break;
	case '%':
		printf("%d % %d = %d", su1, su2, su1 % su2);
		break;
	}
}