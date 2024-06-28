#include<stdio.h>
main()
{
	char day[7][10] = { "sunday","monday","tuesday",
		"wednesday","thursday","friday","saturday" };
	int i;

	for (i = 0; i < 7; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (day[i][0] == 's')
			{
				printf("%c", day[i][j]);
			}
		}
		printf("\n");
	}
}