#include<stdio.h>
main()
{
	int h, m, s;//���A���A�b�����锠
		printf("�b�������:");
		scanf("%d", &s);

		if (s < 0) //�}�C�i�X��
		{
			printf("�G���[");
		}
		else {
			if (s <= 5000) {
				h = s / 3600;
				s = s % 3600;
				m = s / 60;
				s = s % 60;
				printf("%d����%d��%d�b", h, m, s);
			}
			else {
				printf("�G���[");
			}
		}
}