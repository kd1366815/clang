#include<stdio.h>
void str(char *s1,char *s2);
main()
{
	char a[256], b[256];

	printf("�z��a�F");
	gets(a);
	printf("�z��b�F");
	gets(b);

	str(a, b);

	printf("�z��a:%s\n", a);

	
}

void str(char* s1, char* s2)
{
	int i, j;

	for (i = 0; *(s1 + i) != '\0'; i++);

	for (j = 0; *(s1 + i) = *(s2 + j); i++, j++);
}