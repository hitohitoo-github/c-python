#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void fill_random(int **p)
{
	int i, j;
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<4 ; j++)
		{
			**p = rand() % 100;
			(*p)++;
		}
		p++;
	}
}


void print_arr(int **p)
{
	int i, j;
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<4 ; j++)
		{
			printf("%d ", **p);
			(*p)++;
		}
		printf("\n");
		p++;
	}
}

void find_min_max(int **p, int * max, int *min)
{
	int i, j;
	*min = **p;
	*max = **p;

	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<4 ; j++)
		{
			if(**p > *max)	*max = **p;
			if(**p < *min)	*min = **p;
			(*p)++;
		}
		p++;
	}
}


int main(void)
{
	int arr[3][4];
	int *p[3];
	int max, min, i;

	srand(time(NULL));

	for(i=0 ; i<3 ; i++)	p[i] = arr[i];
	fill_random(p);

	for(i=0 ; i<3 ; i++)	p[i] = arr[i];
	find_min_max(p, &max, &min);
	printf("MAX = %d,  MIN = %d\n", max, min);

	for(i=0 ; i<3 ; i++)	p[i] = arr[i];
	print_arr(p);
}
