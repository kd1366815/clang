#include<stdio.h>
main()
{
	int i;
	float box[3], g = 0.0;
	for (i = 0; i < 3; i++) {
		printf("実数を入力：");
		scanf("%f", &box[i]);
	}
	for (i = 0; i < 3; i++) {
		g += box[i];
	}
	printf("合計は%.2fです\n", g);
	printf("平均は%.2fです\n", g / 3.0);
}