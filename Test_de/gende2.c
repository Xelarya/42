#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int De(int nb)
{
	int i = 0;
	int Roll = 0;

	while (i < nb)
	{
		Roll = (1 + rand()%6);
		i++;
	}
	return(Roll);
}

int main()
{
	int result = 0;
	int nbDe = 0;
	srand(time(NULL));

	printf("Nomdre de De : \n");
	scanf("%d", &nbDe);
	result = De(nbDe);
	printf("Resultat : %d\n", result);
}
