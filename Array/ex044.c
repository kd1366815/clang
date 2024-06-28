#include<stdio.h>
main()
{
	char moji1[100], moji2[100], w[100];
	int i;
	printf("文字列１を入力；");
	scanf("%c", &moji1[0]);
	printf("文字２を入力：");
	scanf("%c", &moji2[0]);
	printf("moji1=%s moji2=%s\n", &moji1[0], &moji2[0]);

	//w配列へmoji1配列をコピー
	for (i = 0; moji1[i]!= '\0'; i++) {
		w[i] = moji1[i];
	}
	//0を入れる
	w[i] = '\0';

	//moji1配列へmoji2配列をコピー
	for (i = 0;moji2[i]!= '\0'; i++) {
		moji1[i] = moji2[i];
	}
	//0を入れる
	moji1[i] = '\0';

	//moji2配列へw配列をコピー
	for (i = 0; w[i] != '\0'; i++) {
		moji2[i] = w[i];
	}
	//0を入れる
	moji2[i] = '\0';

	printf("入れ替えると")
}