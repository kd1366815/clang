#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile data[5];
	struct profile* p ;
	int i;
	for (p=data,i = 0; i < 5; i++,p++)
	{
		printf("%d人目（名前）：",i+1);
		scanf("%s", p->name);
		printf("生年月日：");
		scanf("%d%d%d", &p->birth[0],&p->birth[1],&p->birth[2]);
		printf("血液型：");
		scanf("%s", p->blood);
	}
	for (p=data,i = 0; i < 5; i++,p++)
	{
		if (strcmp(p->blood, "A") == 0)
		{
			printf("%s-- %d 年 %d 月 %d 日生まれ 血液型- %s 型\n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
	}
}