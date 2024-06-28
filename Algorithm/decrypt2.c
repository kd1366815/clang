#include<stdio.h>
main()
{
	char s[30];
	int i,k[30];

	printf("文字列を入力して下さい＞");
	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++)
	{
		//復号化キーの入力
		printf("s[%d]の復号化キー＞", i);
		scanf("%d", &k[i]);

		//暗号化キーを使って復号化
		s[i] -= k[i];
	}
	printf("復号済み文字列は、%s", &s[0]);
}