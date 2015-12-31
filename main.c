#include <stdio.h>
#include <stdlib.h>
#include "Pro_implementation_LLC.h"
#include "Fonctions_LLC.h"


int main()
{
    int exist=0, freq=0, val=0,f=0 ;
    struct Maillon *p=NULL ;
    struct Maillon *prec=NULL ;
    struct Maillon *T=NULL ;
    T=Creer() ;
    Affiche_LLC(T);
    printf("%d\n",longueur_LLC(T));
    printf("%d\n", Freq_LLC(T, 23));
    Recherche_occurence_max(T,&freq,&val);
    printf("la freq %d\nla val %d\n", freq, val);
    Recherche_pos(T,4,p, &exist, prec);
    if (exist==1)
    {
    printf ("TROUVEE");
    f=prec->Val ;
    printf("%d\n", f) ;
    }
    else printf("stupide");

 return 0 ;
}
