#include<stdio.h>
#define MapNum 3 //マップの数
#define W 10 //マップの横(10マス)
#define H 5 //マップの縦(5マス)

typedef struct
{
	int m_map[H][W];
}Map;

void SetMap(char* filename, Map* m);
void DrawMap(Map m);

main()
{
	Map MapData;
	int select;
	char* MapFileName[MapNum] 
		= { "map0.txt","map1.txt","map2.txt" };
	printf("表示するマップ？(0,1,2):");
	scanf("%d", &select);
	if (select >= 0 && select <= 2)
	{
		SetMap(MapFileName[select], &MapData);
		DrawMap(MapData);
	}
	else {
		printf("Error:対応するマップがありません\n")
	}
}

void SetMap(char* filename, Map* m)
{
	FILE* fp;
	char ch;
	int i, j;
	if (fp = fopen(filename, "r"))
	{
		for (i = 0; i < H; i++)
		{
			for (j = 0; j < W; j++)
			{
				ch = fgetc(fp);
				m->m_map[i][j] = ch - '0';
			}
			fgetc(fp);
		}
		fclose(fp);
	}
}

void DrawMap(Map m)
{
	int i, j;
	for (i = 0; i < H; i++)
	{
		for (j = 0; j < W; j++)
		{
			if (m.m_map[i][j] == 1)
			{
				printf("ﾛ");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}