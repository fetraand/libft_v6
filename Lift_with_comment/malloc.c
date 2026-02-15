#include <stdio.h>
#include <stdlib.h>

// malloc = Memory ALLOCation
// Alloue un bloc de mémoire de taille spécifiée

// Syntaxe:
void *malloc(size_t taille);  // taille en octets

// Exemple simple:
int *tableau = malloc(5 * sizeof(int));
// Alloue mémoire pour 5 entiers (5 × 4 octets = 20 octets)

int main(void)
{
	// STATIQUE (taille fixe à la compilation)
	int tab[100];
	printf("%zu\n", sizeof(tab) / sizeof(tab[0]));

	// DYNAMIQUE (taille variable à l'exécution)
	int n;
	printf("Combien d'éléments : ");
	scanf("%d", &n);
	int *tableau = malloc(n * sizeof(int));

	printf("%zu", sizeof(tableau) / sizeof(tableau[0]));
	return 0;
	/*
	int tab[100] (Statique) : Ici, tab est un véritable tableau. Le compilateur connaît sa taille exacte (400 octets). sizeof(tab) renvoie donc 400.
	int *tableau (Dynamique) : Ici, tableau est un pointeur. Même si tu as alloué de l'espace pour 100 entiers avec malloc, la variable tableau elle-même reste une simple adresse mémoire.
	*/

	// free = libère la mémoire allouée
// IMPORTANT: Toujours free ce que tu malloc !

// Syntaxe:  void free(void *ptr);


// Exemple:
int *table = malloc(5 * sizeof(int));
// ... utilise tableau ...
free(table);  // Libère la mémoire
table = NULL; // Bonne pratique
}