#include<stdio.h>
void su(int d1, int d2, int* sum, float* avg);
main()
{
	int d1, d2, sum;
	float avg;

	printf("®”‚ğ2‚Â“ü—ÍF");
	scanf("%d%d", &d1, &d2);

	su(d1, d2, &sum, &avg);
	printf("‡Œv‚Í %dA•½‹Ï‚Í%.2f\n", sum, avg);
}

void su(int d1, int d2, int* sum, float* avg)
{
	*sum = d1 + d2;
	*avg = (float)*sum / 2;
}