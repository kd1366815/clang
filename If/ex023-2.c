#include<stdio.h>
main()
{
	int sei;
	printf("西暦を入力:");
	scanf("%d", &sei);
	if (sei % 4 == 0 && sei % 100 != 0 || sei % 400 == 0)
	{
		printf("うるう年です");
	}
	else {
		printf("平年です");
	}
}