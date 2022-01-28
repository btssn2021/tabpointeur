#include <stdio.h>
#include <string.h>

void affichetab(int* tab);

void affichetab(int *tab) {
    for(int i=0;i<8;i++)
    {
        printf("%d",tab[i]); //pas besoin d'indirection * devant tab
    }

}

int mesentiers[8]; //déclaration d'un tableau entiers
char machaine[8]; //déclaration d'une chaine de caractère taille maxi 8;
int *ptr;
int main() {

    /*****************manipulation d'une chaine de caractères********************/
    strcpy(machaine,"eric"); //je mets eric dans le tableau
    scanf("%s",machaine); //pas besoin de & un tableau est un pointeur
    printf("%s\n",machaine);

    /***************manipulation d'un tableau d'entier************************/
    mesentiers[0]=1; // je met 1 dans la première case
    ptr=mesentiers; //pas besoin de & un tableau est un pointeur
    printf("%p\n",ptr);
    affichetab(mesentiers); //pas besoin de & un tableau est un pointeur
    return 0;
}
