f#include<stdio.h>
main()
{
	int n1, n2, n3, g;
	printf("整数を3個入力:");
	scanf("%d%d%d", &n1, &n2, &n3);
	g = n1 + n2 + n3;
	printf("合計%d\t平均%.2f", g, g / 3.0);//\t:タブ、位置合わせ
}