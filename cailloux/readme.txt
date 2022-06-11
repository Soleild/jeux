Donnes de l'exercice trouvées sur : https://www.cours-gratuit.com/langage-c/exercice-langage-c-jeux-de-cailloux

Le jeu des cailloux : un tas de N cailloux se trouve entre deux joueurs ; à tour de rôle chacun prend 1, 2 ou 3 cailloux. Celui qui est obligé de prendre le dernier caillou a perdu.

Ce jeu possède une stratégie gagnante :  le joueur qui réussit, à laisser un nombre de cailloux égal à un multiple de 4 plus 1, à chaque fois qu’il doit jouer, gagne à coup sûr.

Le but est d’écrire un programme qui simule le jeu des cailloux (entre vous et la machine) :

Ecrire une fonction initialiser qui demande le nombre de cailloux et quel joueur commence le premier.

Ecrire une fonction utilisateur_joue qui demande à l’utilisateur le nombre de cailloux à prendre et qui met à jour le nombre de cailloux restants.

Ecrire une fonction machine_joue qui permet à la machine de prendre un nombre de cailloux et qui met à jour le nombre de cailloux restants.

Ecrire le programme principal.

Les prototypes :

void initialiser(int *nbCa, int *jo) ;

void utilisateur_joue(int *nbCa) ;

void machine_joue(int *nbCa) ;

nbCa : le nombre de cailloux

jo : joueur (1 : l’utilisateur et 2 : la machine)

Bonne chance a vous !