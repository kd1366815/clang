#include<stdio.h>
main()
{
	int i, s, d[10] = { 10,5,30,77,16,3,47,29,37,33 };

	printf("探索値を入力してください＞");
	scanf("%d", &s);
	
	for (i = 0; i < 10; i++)
	{
		if (s == d[i]) 
		{
			if (i >= 10)
			{
				printf("見つからなかった");
			}
			else {
				printf("配列の%d番目に見つかった", i);
			}
		}
	}

}