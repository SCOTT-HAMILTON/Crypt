#include <string.h>
#include <stdio.h>

void codage(void){
	printf("Entre le mot a coder\n");
	char texte[50];
	scanf("%s",&texte);
	char clef[20];
	printf("Entre la clef de codage:\n");
	scanf("%s",clef);
	int i = 0;int taille = strlen(texte);
	int k = 0;int taille_de_clef = strlen(clef);
	/*.....................................*/
	int solution = 0;

	for(i = 0;i <= taille; i++){
		k = clef[i];
			if(i > taille_de_clef){
		k = clef[0];
		}
		texte[i]-=k;
		if(texte[i] < 32){
			texte[i] +=128;
		}
		solution++;
		if(solution != taille){
		printf("%c",texte[i]);
		}
	}
    printf("\nAppuyer sur une touche pour continuer...");
    while (getchar() != '\n');
    /*.....................................*/
	FILE *fichier = NULL;
	fichier = fopen("source.txt","w");
	fprintf(fichier,"%s",texte);
	fclose(fichier);
    getchar();
    printf("\n");
}
