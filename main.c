#include <stdio.h>
#include <stdlib.h>
#include "codage.h"
#include "decodage.h"

int main(void){
    int reponse = 0, continuer = 1;

    while (continuer){
        reponse = 0;
        system("cls");
        printf("\n\tQue voulez vous faire?\n");
        printf("1.Crypter\n2.Decrypter\n3.quitter\n");
        scanf ("%d", &reponse);
        if (reponse == 1){
            codage();
        }
        if (reponse == 2){
            decodage();
        }
        if (reponse == 3){
            exit(EXIT_SUCCESS);
        }
        if (reponse != 1 && reponse != 2){
            if (reponse != 3){
                printf("Cette valeur n'as pas ete proposer.\n");
                printf("\nAppuyer sur une touche pour continuer...");
                while (getchar() != '\n');
                getchar();
                printf("\n");
            }
        }
    }

    return 0;
}

#include "decodage.c"
#include "codage.c"
