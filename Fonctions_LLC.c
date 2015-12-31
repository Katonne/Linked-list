#include <stdlib.h>
#include<stdio.h>
#include "Fonctions_LLC.h"

struct Maillon *Creer()
  {
    struct Maillon  *P, *Q, *Prem ;
    int I, Nombre, V;

    printf("\n --- Nombre d elements de la liste a creer : \t");
    scanf("%d" , &Nombre);

    Prem = NULL ;
    P = NULL ;
    for (I=1; I<=Nombre ;I++)
      {
        printf(" \t Element %d insere : ", I);
        scanf("%d" , &V);
        Q = Allouer();
        Aff_Val(Q,  V);
        Aff_Adr(Q, NULL);
        if (Prem != NULL )
          Aff_Adr(P, Q) ;
        else Prem = Q ;
        P = Q ;
       }
     return(Prem);
  }

int longueur_LLC (struct Maillon *L)
{
    struct Maillon *p=NULL ;
    int i=0 ;
    p=L ;

    while (p!=NULL)
    {
        p= Suivant(p) ;
        i++ ;
    }

    return i ;
}

void Affiche_LLC (struct Maillon *L)
{
    struct Maillon *p=NULL ;
    int i=0 ;
    p=L ;

    while (p!=NULL)
    {
        printf("La valeur %d de la LLC est : %d \n", i, valeur(p)) ;
        p=Suivant(p) ;
        i++ ;
    }
}

int Freq_LLC(struct Maillon *L, int nbr)
{
    int i=0 ;
    struct Maillon *p=NULL ;
    p=L ;

    while (p!=NULL)
    {
        if (valeur(p)== nbr) i++ ;
        p=Suivant(p) ;

    }
    return i ;
}

void Recherche_occurence_max(struct Maillon *L, int *freq, int *val)
{
    struct Maillon *p=NULL ;
    p=L ;
    if (p!=NULL)
    {
        *freq= Freq_LLC(L, valeur(p)) ;
        *val=valeur(p) ;
        p=Suivant(p) ;
        while (p!=NULL)
        {
            if (valeur(p) != *val)
            {
                 if(Freq_LLC(L, valeur(p))> *freq)
                 {
                     *freq= Freq_LLC(L, valeur(p)) ;
                     *val= valeur(p) ;
                 }
            }
            p= Suivant(p) ;
        }
    }
}

void Recherche_pos(struct Maillon *L, int pos,struct Maillon *p, int *trouv,struct Maillon *preced)
{
    int i=1 ;
    p=L ;
    *trouv=0 ;
    preced=NULL ;
    while ((p!=NULL) && (!*trouv))
    {
        if (i==pos)
            *trouv = 1 ;

        else
        {
            i++ ;
            preced =p ;
            p=Suivant(p) ;
        }
    }
}

void recherche_val_LLC(struct Maillon *L, int val, int *exist, int *preced)
{
    struct Maillon *q=NULL ;
    struct Maillon *p=NULL ;
    *preced=NULL ;
    *exist =0 ;

    while ((q!=NULL)&& (!*exist))
    {
        if (val==valeur(q))
        *exist=1 ;
        else
        {
            preced=q ;
            q=Suivant(q) ;
        }
    }
     p=q ;
}

//void recherche_val_LLC_triee()

