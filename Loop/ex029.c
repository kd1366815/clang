#include<stdio.h>
main()
{
	int su, i;
	printf("数を入れて:");
	scanf("%d", &su);
	i = 0;
	while (i < su) {
		printf("*");
		i++;//i=i+1; 又は　i+=1;でもok
	}
}