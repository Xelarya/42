#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int de()
{
	return (((rand()%5)+1)*2);
}

int tirerDes(int nb)
{
	int somme = 0;
	int i = 0;

	while (i < nb)
	{
		somme += de();
		i++;
	}
	return (somme);
}

int main()
{
	int somme = 0;
	int nbDe = 0;
	srand(time(NULL));

	printf("Entrez le nombre de stam a utilser : \n");
	scanf("%d", &nbDe);
	somme = tirerDes(nbDe);
	printf("Exp obtenue : %d\n", somme);
}
