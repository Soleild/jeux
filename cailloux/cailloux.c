/* jeu des cailloux */

#include <stdlib.h>
#include <stdio.h>


void initialiser(int *nbCa, int *jo);

void jeu (int jo, int *nbCa);

void machine_joue(int *nbCa);

void utilisateur_joue(int *nbCa);

void changer_joueur (int *jo);

int main ()

{
	int finJeu = 0;
	int nbCailloux, joueur, perdant;
	initialiser(&nbCailloux, &joueur);

	while (!finJeu)
	{
		printf("\nil reste %d cailloux\n", nbCailloux);
		jeu (joueur, &nbCailloux);
		if (nbCailloux == 0)
		{
			perdant = joueur;
			finJeu = 1;
		}
		else
		{
			changer_joueur (&joueur);
		}
	}
	if (perdant == 1)
	{
		printf("dommage: tu as perdu\n");
	}
	else
	{
		printf("bravo : tu as gagne\n");
	}
	return(0);
}

void initialiser(int *nbCa, int *jo)
{
	int rep;
	printf("donnez le nombre de cailloux maximun 3:");
	scanf("%d", nbCa);
	printf("\nchoix du premier joueur:\n");
	printf("\tutilisateur.: 1\n");
	printf("\tmachine.....: 2\n");
	printf("qui ?");
	scanf("%d", &rep);
	switch (rep)
	{
		case 1: *jo = 1;
			break;
		case 2: *jo = 2;
			break;
	}
}

void jeu(int jo, int *nbCa)

{
	if (jo == 2)
	{
		machine_joue(nbCa);
	}
	else
	{
		utilisateur_joue(nbCa);
	}
}

void machine_joue(int *nbCa)

{
	int cailloux_pris, modu;
	modu = *nbCa % 4;
	switch (modu)
	{
		case 0: cailloux_pris = 3;
			break;
		case 1: cailloux_pris = 1;
			break;
		case 2: cailloux_pris = 1;
			break;
		case 3: cailloux_pris = 2;
			break;
	}
	printf("j\'ai pris %d cailloux \n", cailloux_pris);
	*nbCa = *nbCa - cailloux_pris;
}

void utilisateur_joue(int *nbCa)
{
	int cailloux_pris;
	do
	{
		printf("combien de cailloux: ");
		scanf("%d", &cailloux_pris);
	}
	while ((cailloux_pris <=0 ) || (cailloux_pris >=11) || (cailloux_pris > *nbCa));
	*nbCa = *nbCa - cailloux_pris;
}

void changer_joueur (int *jo)
{
	if (*jo ==2)
	{
		*jo = 1;
	}
	else
	{
		*jo = 2;
	}
}


