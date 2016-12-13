#include <stdio.h>
#include <stdlib.h>
#include "codage.h"
#include "decodage.h"

int main(void){
    int reponse = 0, continuer = 1;

    while (continuer){
        printf("\n\tQue voulez vous faire?\n");
        printf("1.Crypter\n2.Decrypter\n3.quiter\n");
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
    }

    return 0;
}

#include "decodage.c"
#include "codage.c"
