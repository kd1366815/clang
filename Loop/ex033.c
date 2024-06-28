#include<stdio.h>
main()
{
	int i, su, sum;
	do {
		sum += su;
		i++;
		printf("数は？");
		scanf("%d", &su);
	} while (su != -999);
	printf("合計＝%d 平均＝%.2f\n", sum, (float)sum / (i - 1));

}
	/*printf("数は？");
	scanf("%d", &su);
	for(i = 0, sum = 0; su != -999; i++)
	{
		sum += su;
		printf("数は？");
		scanf("%d", &su);
	}
	printf("合計＝%d　平均＝%.2f\n", sum, sum / (float)i);
	*/

	/*int i,sum,su;
	printf("数は？);
	scanf("%d",&su);
	i=0;
	sum=0;
	while(su != -999){
	sum+=su;
	printf("数は？");
	scanf("%d",&su);
	i++;
	}*/