#include<stdio.h>
main()
{
	char en;
	printf("���Z�q�����āF");
	scanf("%c", &en);

	switch (en ) {
	case '+':
		printf("���Z�ł�");
		break;
	case '-':
		printf("���Z�ł�");
		break;
	case '*':
		printf("��Z�ł�");
		break;
	case '/':
		printf("���Z�ł�");
		break;
	case '%':
		printf("��]�ł�");
		break;
	default:
		printf("���̑��ł�");
	}
}