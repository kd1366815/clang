#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int p,c;

	srand(time(0));
	rand();

	printf("何を出しますか？\n(1:グー 2:チョキ 3:パー)＞");
	scanf("%d", &p);

	c = rand() % 3;

	switch(p) {
		case 1: printf("\nプレイヤーはグーです。");
			break;
		case 2:printf("\nプレイヤーはチョキです。");
			break;
		case 3:printf("\nプレイヤーはパーです。");
			break;
	}

	switch(c) {
	case 0:printf("\nコンピュータは、グーです。");
		break;
	case 1:printf("\nコンピュータは、チョキです。");
		break;
	case 2:printf("\nコンピュータは、パーです。");
		break;
	}

	switch (((p - 1) - c + 3) % 3)
	{
	case 0:printf("\nあいこです。");
		break;
	case 1:printf("\nコンピュータの勝ちです。");
		break;
	case 2:printf("\nプレイヤーの勝ちです。");
		break;
	}
	
}