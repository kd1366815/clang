#include<stdio.h>
main()
{
	int i;
	float box[3], g = 0.0;
	for (i = 0; i < 3; i++) {
		printf("ŽÀ”‚ð“ü—ÍF");
		scanf("%f", &box[i]);
	}
	for (i = 0; i < 3; i++) {
		g += box[i];
	}
	printf("‡Œv‚Í%.2f‚Å‚·\n", g);
	printf("•½‹Ï‚Í%.2f‚Å‚·\n", g / 3.0);
}