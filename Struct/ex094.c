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
		printf("%dl–Úi–¼‘OjF",i+1);
		scanf("%s", p->name);
		printf("¶”NŒŽ“úF");
		scanf("%d%d%d", &p->birth[0],&p->birth[1],&p->birth[2]);
		printf("ŒŒ‰tŒ^F");
		scanf("%s", p->blood);
	}
	for (p=data,i = 0; i < 5; i++,p++)
	{
		if (strcmp(p->blood, "A") == 0)
		{
			printf("%s-- %d ”N %d ŒŽ %d “ú¶‚Ü‚ê ŒŒ‰tŒ^- %s Œ^\n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
	}
}