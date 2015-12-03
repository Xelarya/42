#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i = 0;
	srand(time(NULL));

	while (i < 3)
	{
		printf("%d\n", 1 + rand()%6);
		i++;
	}
}
