#include<stdio.h>
main()
{
	char i;
	printf("アルファベット？");
	scanf("%s", &i);
	switch (i)
	{
	case 'a':
		printf("America\nAustralia");
		break;
	case 'A':
		printf("America\nAustralia");
		break;
	case 'e':
		printf("England");
		break;
	case 'E':
		printf("England");
		break;
	case 'f':
		printf("France");
		break;
	case 'F':
		printf("France");
		break;
	case 'j':
		printf("Japan");
		break;
	case 'J':
		printf("Japan");
		break;
	}
}