#include<stdio.h>
#define DATA_END -1

struct ken {
	int code;
	char name[20];
	struct ken* next;
};

main()
{
	struct ken ken_data[] = 
	{ 
		{1,"kCΉ",NULL},
		{2,"ΒX§",NULL},
		{3,"βθ§",NULL},
		{4,"{ι§",NULL},
		{5,"Hc§",NULL},
		{6,"R`§",NULL},
		{7,"§",NULL},
		{DATA_END,"",NULL} 
	};
	struct ken* p, * wp;

	struct ken hyogo = { 28,"ΊΙ§",NULL };
	struct ken osaka = { 27,"εγ{",NULL };

	//NΜέθ
	p = wp = ken_data;
	do {
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);

	//kCΉΖΒX§ΜΤΙΊΙ§π}ό·ι
	ken_data[0].next = &hyogo;//kCΉΜnextΙΊΙΜAhXπZbg
	hyogo.next = &ken_data[1];//ΊΙΜnextΙΒXΜAhXπZbg

	//§ΜγλΙ27,εγ{πΗΑ
	ken_data[6].next = &osaka;//§ΜnextΙεγΜAhXπZbg
	osaka.next = &ken_data[7];//εγΜnextΙf[^[ΜAhXπZbg

	//}όγΜNΜ\¦
	for (p = ken_data; p->code != DATA_END; p = p->next)
	{
		printf("code = %d  name = %s\n", p->code, p->name);
	}
}