#include<stdio.h>
main()
{
	//�ϐ��錾
	int max_score,score = 0;
	char ch;
	char max_name[20],name[20];
	FILE* fp;

	fp=fopen("score.txt","r");
	fscanf(fp,"%s%d", max_name,&max_score);
	fclose(fp);
	printf("�ō����_�@���O�F%s�@�X�R�A�F%d\n", max_name, max_score);

	//�v���C���[���̓���
	printf("�v���C���[�̖��O��:");
	scanf("%s", name);

	//�X�R�A���Z���[�v
	while (1)
	{
		printf("���݂̃X�R�A�F%d(Enter�ŃX�R�A+1,e�ŏI��)\n", score);
		ch = getch();
		if (ch == 'e') 
		{
			break;
		}
		//�X�R�A���Z
		score++;
	}
	if (score > max_score) 
	{
		//�t�@�C��score.txt�ւ̏�������
		//�t�@�C���̃I�[�v��
		fp = fopen("score.txt", "w");
		//�t�@�C���ւ�name��score�̏�������
		fprintf(fp, "%s\n%d\n", name, score);
		//�t�@�C���̃N���[�Y
		fclose(fp);
	}
}
