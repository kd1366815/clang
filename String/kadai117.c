#include<stdio.h>
main()
{
	char day[7][10] = { "sunday","monday","tuesday",
		"wednesday","thursday","friday","saturday" };
	
	/*int puts(day);*/

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			/*printf("%c ", day[i][j]);*/
			int puts(day);
			printf("%c", day[i][j]);
		}
		printf("\n");
	}

	return 0;
}