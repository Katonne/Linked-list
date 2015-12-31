#ifndef PRO_IMPLEMENTATION_LLC_H_INCLUDED
#define PRO_IMPLEMENTATION_LLC_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>



struct Maillon *Allouer ( ) ;

void Aff_Val (struct Maillon *P, int v) ;

void Aff_Adr (struct Maillon *P,struct Maillon *Q) ;

struct Maillon *Suivant (struct Maillon *P) ;

int valeur ( struct Maillon *P) ;

#endif
