#include<stdio.h>
#include<stdlib.h>
struct day {
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[20];
	struct day data;
	char blood[5];
};
main()
{
	struct profile data[5] = { {"aota",2000,1,1,"A"},
		{"yamashita",1999,2,28,"B"},
		{"simizu",1998,5,1,"O"},
		{"takata",1997,12,31,"AB"},
		{"kisimoto",1996,2,1,"A"} };

	struct profile* p;
	int i;
	for (p = data, i = 0; i < 5; i++, p++)
	{
		if (p->data.tuki == 2) {
			printf("%s-- %d ”N %02d ŒŽ %02d “ú¶‚Ü‚ê ŒŒ‰tŒ^- %s Œ^\n", p->name, p->data.nen, p->data.tuki, p->data.hi, p->blood);

		}
	}
}