#include<stdio.h>
main()
{
	//変数宣言
	int max_score,score = 0;
	char ch;
	char max_name[20],name[20];
	FILE* fp;

	fp=fopen("score.txt","r");
	fscanf(fp,"%s%d", max_name,&max_score);
	fclose(fp);
	printf("最高得点　名前：%s　スコア：%d\n", max_name, max_score);

	//プレイヤー名の入力
	printf("プレイヤーの名前は:");
	scanf("%s", name);

	//スコア加算ループ
	while (1)
	{
		printf("現在のスコア：%d(Enterでスコア+1,eで終了)\n", score);
		ch = getch();
		if (ch == 'e') 
		{
			break;
		}
		//スコア加算
		score++;
	}
	if (score > max_score) 
	{
		//ファイルscore.txtへの書き込み
		//ファイルのオープン
		fp = fopen("score.txt", "w");
		//ファイルへのnameとscoreの書き込み
		fprintf(fp, "%s\n%d\n", name, score);
		//ファイルのクローズ
		fclose(fp);
	}
}
