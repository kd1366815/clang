#include<stdio.h>
main()
{
	int tsuki;
	printf("�������:");
	scanf("%d", &tsuki);
	if (tsuki == 2) {
		printf("�ŏI����28���ł�");
	}
	else {    //||���g���Ƃ��͍��ӂ𖈉���͂���
		if (tsuki == 4 ||tsuki== 6 || tsuki==9 ||tsuki== 11) {
			printf("�ŏI����30���ł�");
		}
		else {
			printf("�ŏI����31���ł�");
		}
	}
}