#include<stdio.h>
main()
{
	char data[] = "Language";
	char* p_data, ch;
	int i = 0;

	p_data = data;

	printf("data[]=%s\n", p_data);
	printf("�����l�́H");
	scanf("%c", &ch);

	printf("�������ʂ́A");
 for(p_data=data,i=0;*(p_data + i) != '\0';i++){//*(p_data+i)<=*p_data

		if (ch == *(p_data + i))//*(p_data+i)<=*p_data++
		{
			printf("%d ", i + 1);
		}
	}
 printf("�ł�\n");
}