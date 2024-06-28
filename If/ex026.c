#include<stdio.h>
main()
{
	int tsuki;
	printf("月を入力:");
	scanf("%d", &tsuki);
	if (tsuki == 2) {
		printf("最終日は28日です");
	}
	else {    //||を使うときは左辺を毎回入力する
		if (tsuki == 4 ||tsuki== 6 || tsuki==9 ||tsuki== 11) {
			printf("最終日は30日です");
		}
		else {
			printf("最終日は31日です");
		}
	}
}