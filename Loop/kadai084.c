#include<stdio.h>
main()
{
	int su1, su2;
	
	while (1)
	{
		if (su1 == -999 || su2 == -999)
		{
			break;
		}
		while (2)
		{
			printf("整数１(-999で終了)？");
			scanf("%d", su1);
			printf("整数２(-999で終了)？");
			scanf("%d", su2);

			if (su2 == 0)
			{
				continue;
			}
		}
		printf("%d/%d=%d あまり %d\n", su1, su2, su1 / su2, su1 % su2);

	}
}