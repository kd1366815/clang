#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int data[20],i, work, target;

	srand(time(0));
	i = 0;
	while(i < 20)
	{
		data[i] = i + 1;
	}
	i = 0;
	while(i < 20)
	{
		target = rand() % 20;
		work = data[i];
		data[i] = data[target];
		data[target] = work;
		i++;
	}
	for (i = 0; i < 20; i++) 
	{
		printf("%d", data[i]);
	}
}