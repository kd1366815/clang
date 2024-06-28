#include<stdio.h>
void str(char *s1,char *s2);
main()
{
	char a[256], b[256];

	printf("配列a：");
	gets(a);
	printf("配列b：");
	gets(b);

	str(a, b);

	printf("配列a:%s\n", a);

	
}

void str(char* s1, char* s2)
{
	int i, j;

	for (i = 0; *(s1 + i) != '\0'; i++);

	for (j = 0; *(s1 + i) = *(s2 + j); i++, j++);
}