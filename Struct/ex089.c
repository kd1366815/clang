#include<stdio.h>
#include<stdlib.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile data;

	printf("名前を入力：");
	gets(data.name);

	printf("生年月日を空白で区切って入力：");
	scanf("%d%d%d", &data.birth[0], &data.birth[1], &data.birth[2]);

	printf("血液型を入力：");
	scanf("%s", &data.blood[0]);

	printf("%sーー%d 年 %d 月 %d 日生 血液型ー %s型\n", data.name, data.birth[0], data.birth[1],data.birth[2], data.blood);
}