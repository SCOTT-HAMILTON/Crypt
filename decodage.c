#include <stdio.h>
#include <string.h>
#include "decodage.h"

void decodage(void){
	char texte[50];

	FILE *fichier = NULL;
	fichier = fopen("source.txt","r");
	while(fgets(texte,50,fichier) != NULL){}
	fclose(fichier);
	int taille = strlen(texte);
	char clef[20];
	printf("Entre la clef de decodage:\n");
	scanf("%s",clef);
	int k = 0;int i = 0;
	int solution;int cle = 0;
	int taille_de_clef = strlen(clef);
	printf("\n\nresultat:\n\n");
	/*......................................*/
		for(i = 0;i <= taille; i++){
		k = clef[cle];
		if(i > taille_de_clef){
		k = clef[0];
		}
		texte[i] += k;
		if(texte[i] < 32){
			texte[i] -= 128;
		}
		++solution;
		if(solution != taille +2){
		}
	cle++;
	}
	/*......................................*/
	printf("%s",texte);
	printf("\nAppuyer sur une touche pour continuer...");
	while (getchar() != '\n');
	getchar();
	printf("\n");
}
