#include<stdio.h>
main()
{
	int i, su, sum;
	do {
		sum += su;
		i++;
		printf("���́H");
		scanf("%d", &su);
	} while (su != -999);
	printf("���v��%d ���ρ�%.2f\n", sum, (float)sum / (i - 1));

}
	/*printf("���́H");
	scanf("%d", &su);
	for(i = 0, sum = 0; su != -999; i++)
	{
		sum += su;
		printf("���́H");
		scanf("%d", &su);
	}
	printf("���v��%d�@���ρ�%.2f\n", sum, sum / (float)i);
	*/

	/*int i,sum,su;
	printf("���́H);
	scanf("%d",&su);
	i=0;
	sum=0;
	while(su != -999){
	sum+=su;
	printf("���́H");
	scanf("%d",&su);
	i++;
	}*/