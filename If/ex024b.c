#include<stdio.h>//ex024b.c
main()
{
	char moji;
	printf("文字を入力:");
	scanf("%c", &moji);
	
	if (moji >= 'A' && moji <= 'Z') {
		printf("大文字です\n");
	}
		else
		{
			printf("その他の文字です\n");
		}
		

}