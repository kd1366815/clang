#include<stdio.h>
void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo);
main()
{
	int a, b, c, d,e, f;

	printf("数値？：");
	scanf("%d", &a);
	printf("数値？：");
	scanf("%d", &b);
	shisoku(a, b, &c, &d, &e, &f);
	puts("数値と数値の四則演算");
	printf("wa = %d  sa = %d  seki = %d  syo = %d\n", c, d, e, f);
}

void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo)
{
	*wa = x + y;
	*sa = x - y;
	*sk = x * y;
	*syo = x / y;
}