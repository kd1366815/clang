#include<stdio.h>
main()
{
	char en;
	printf("演算子を入れて：");
	scanf("%c", &en);

	switch (en ) {
	case '+':
		printf("加算です");
		break;
	case '-':
		printf("減算です");
		break;
	case '*':
		printf("乗算です");
		break;
	case '/':
		printf("除算です");
		break;
	case '%':
		printf("剰余です");
		break;
	default:
		printf("その他です");
	}
}