#include<stdio.h>
#define DATA_END -1

struct ken {
	int code; //県コード
	char name[20];//県名
	struct ken* next;
};

main()
{
	struct ken ken_data[] = 
	{ 
		{1,"北海道",NULL},
		{2,"青森県",NULL},
		{3,"岩手県",NULL},
		{4,"宮城県",NULL},
		{5,"秋田県",NULL},
		{6,"山形県",NULL},
		{7,"福島県",NULL},
		{DATA_END,"",NULL} 
	};
	struct ken* p, * wp;

	

	//リンクの設定
	p = wp = ken_data;
	do {
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);

	//データを削除してみる
	//青森県のnextに宮城県のアドレスを入れる
	ken_data[1].next = &ken_data[3];

	//山形県を消してみる
	//秋田県のnextに福島県のアドレスを入れる
	ken_data[4].next = &ken_data[6];

	//リンクの表示
	for (p = ken_data; p->code != DATA_END; p = p->next)
	{
		printf("code = %d  name = %s\n", p->code, p->name);
	}
}