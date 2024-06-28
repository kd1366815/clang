#include<stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
};

void display1(int a);
void display2(struct syohin_data syohin);
void display3(struct syohin_data *p);
main()
{
	int a = 10;
	struct syohin_data syohin = { "ƒPƒVƒSƒ€",50 };

	display1(a);//’l“n‚µ
	display2(syohin);//’l“n‚µ
	display3(&syohin);//ƒAƒhƒŒƒX(&)“n‚µ

	//‘‚«•Ï‚í‚Á‚½‚©‚ğŠm”F‚·‚é
	display2(syohin);
}

void display1(int a)
{
	printf("a = %d\n", a);
}

void display2(struct syohin_data syohin)
{
	printf("syohin.name = %s syohin.tanka = %d\n", syohin.name, syohin.tanka);
}

void display3(struct syohin_data* p)
{
	printf("p->name = %s p->tanka = %d\n", p->name, p->tanka);

	//ƒAƒhƒŒƒX‚ğó‚¯æ‚Á‚Ä‚¢‚é‚Ì‚Å
	//‘‚«Š·‚¦‚ª‰Â”\
	//’P‰¿‚ğ‚P‚O‚O‚É‚µ‚Ä‚İ‚é
	strcpy(p->name , "’lã‚°ƒPƒVƒSƒ€");
	p->tanka = 100;
}
