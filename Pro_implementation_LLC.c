#include "Pro_implementation_LLC.h"

struct Maillon
  {
    int  Val ;
    struct Maillon *Suiv ;
  }  ;

// Procédures d'implémentation du modèle sur les listes linéaires chaînées

struct Maillon *Allouer ( )
  {
    return  (  (struct Maillon *) malloc( sizeof(struct Maillon))   );
  }

void Aff_Val(struct Maillon *P, int V)
  { P->Val =V; }

void Aff_Adr( struct Maillon *P,  struct Maillon *Q)
  {  P->Suiv = Q; }

struct Maillon *Suivant(  struct Maillon *P)
  { return( P->Suiv );  }

int valeur( struct Maillon *P)
  { return( P->Val) ; }
