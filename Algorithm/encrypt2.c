#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[30];
	int k[30];
	int i, n;

	//乱数のシャッフル
	srand(time(0));

	printf("文字列を入力してください＞");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++)
	{
		k[i] = rand() % 5 + 1;
		s[i] = s[i] + 1;
	}
	printf("暗号化文字列は、%s\n", s);
	printf("暗号化キーは、");
	for (n = 0; n < i; n++)
	{
		printf("%d", k[n]);
	}
}