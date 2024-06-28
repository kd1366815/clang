#include<stdio.h>
main()
{
	int c;
	char dumy[256];
	char* p;

	p = gets(dumy);

	while (p != NULL) /*データの入力完了　ctrl+Z*/
	{
		printf("%s\n", dumy);
		p = gets(dumy);
	}
}