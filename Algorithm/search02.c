#include<stdio.h>
main()
{
	int s, i, d[11] = { 10,5,30,77,16,3,47,29,37,33};

	printf("’Tõ’l‚ð“ü—ÍF");
	scanf("%d", &s);
	
	//”Ô•º‚ðŽdž‚Þ
	d[10] = s;

	for (i = 0; s != d[i]; i++)
	{

	}

	if (i >= 10) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else {
		printf("d[%d]‚É‚ ‚Á‚½\n", i);
	}
}