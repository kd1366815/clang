#include<stdio.h>
main()
{
	int no, ans;
	printf("�����H");
	scanf("%d", &no);
	ans = no % 2;
	if (ans == 0) {
		printf("�����ł�");
	}
	else {
		printf("��ł�\n");
	}
}