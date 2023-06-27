#include <stdio.h>
#include <stdlib.h>

int choixNbr=1000, nbrMin =0, nbrMax =100, longListe, quest;
int life;

float moyNbr;

int main(){
    char rep=0;


    while(choixNbr < nbrMin || choixNbr > nbrMax){
        printf("Choisis un nombre que je vais devoir retrouver entre %d et %d\n", nbrMin, nbrMax);
        scanf("%d", &choixNbr);
    }
    printf("le nombre que je dois trouver: %d\n\n=====================================\n=====================================\n\n", choixNbr);
    printf("Je vais commencer a essayer de deviner votre nombre!\nsi c'est plus appuyez sur +, si c'est moins appuyez sur -, si c'est le bon nombre appuyez sur ENTRER!");
    longListe=nbrMax-nbrMin;
    moyNbr =longListe/2;
    printf("\ntaile liste: %d\nmoyenne:%.f", longListe, moyNbr);
    for(life=5; life>0; life--){
        printf("\nest ce que votre nombre est: %.f ?\n", moyNbr);
        rep = getch();
        printf("reponse: %c", rep);
        if(rep == '+'){
            quest=moyNbr;
            nbrMin=moyNbr;
            longListe=nbrMax-nbrMin;
            moyNbr =(longListe/2)+nbrMin;
        }
        if(rep == '-'){
            quest=moyNbr;
            nbrMax=moyNbr;
            longListe=nbrMax-nbrMin;
            moyNbr =(longListe/2)+nbrMin;
        }
        if(rep == 'o' ){
            quest=moyNbr;
            printf("\nj'ai trouve votre nombre c'est :%d", quest);
            life=0;
        }
        rep=getch();

    }



    /*printf("\ntail liste: %d\nmoy nombre: %.f", longListe, moyNbr);*/




}
