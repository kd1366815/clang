#include<stdio.h>
main()
{
	int su, i;
	for (su=0, i=1; i <= 10; i++) {
		su+=i;
		printf("�P����%d�܂ł̘a��%d\n", i, su);
	}
}