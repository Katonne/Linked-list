#ifndef FONCTIONS_LLC_H_INCLUDED
#define PRO_IMPLEMENTATION_LLC_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

struct Maillon
  {
    int  Val ;
    struct Maillon *Suiv ;
  }  ;


//Pour construire une chaine à partir de n données
struct Maillon *Creer() ;

// retourne la longueur d'une LLC dont la tête est L
int longueur_LLC (struct Maillon *L) ;

//Affiche une LLC
void Affiche_LLC (struct Maillon *L) ;

//Renvoie la valeur d'apparition de nbr dans la LLC L
int Freq_LLC(struct Maillon *L, int nbr) ;

void Recherche_occurence_max(struct Maillon *L, int *freq, int *val) ;

void recherche_val_LLC(struct Maillon *L, int val, int *exist, int *preced) ;

void Recherche_pos(struct Maillon *L, int pos,struct Maillon *p, int *trouv, struct Maillon *preced) ;


#endif
