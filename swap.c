#include<stdio.h>

void swap1(int i, int j)
{
	int t = i;
	i = j;
	j = t;
}

void swap2(int *i, int *j)
{
	int t = *i;
	*i = *j;
	*j = t;
}

int main()
{
int i = 5, j = 2;

printf("Pre-1: i, %d, j: %d\n", i, j);
swap1(i, j);
printf("Post-1: i: %d, j: %d\n", i, j);

printf("Pre-2: i, %d, j: %d\n", i, j);
swap2(&i, &j);
printf("Post-2: i: %d, j: %d\n", i, j);

return 0;
}
