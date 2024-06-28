#include<stdio.h>
main()
{
	char data[] = "abcde";
	int i;

	for (i = 0; data[i] != '\0'; i++)
	{
		printf("%c", data[i]);
	}

}