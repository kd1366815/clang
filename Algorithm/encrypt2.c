#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[30];
	int k[30];
	int i, n;

	//�����̃V���b�t��
	srand(time(0));

	printf("���������͂��Ă���������");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++)
	{
		k[i] = rand() % 5 + 1;
		s[i] = s[i] + 1;
	}
	printf("�Í���������́A%s\n", s);
	printf("�Í����L�[�́A");
	for (n = 0; n < i; n++)
	{
		printf("%d", k[n]);
	}
}