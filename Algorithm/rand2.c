#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int dice;

	srand(time(0));

	dice = rand() % 6 + 1;
	2
	printf("サイコロは%dです\n", dice);
}