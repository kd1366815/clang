#include<stdio.h>
main()
{
	char s[30];
	int i,k[30];

	printf("���������͂��ĉ�������");
	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++)
	{
		//�������L�[�̓���
		printf("s[%d]�̕������L�[��", i);
		scanf("%d", &k[i]);

		//�Í����L�[���g���ĕ�����
		s[i] -= k[i];
	}
	printf("�����ςݕ�����́A%s", &s[0]);
}