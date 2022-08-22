#include <stdio.h>
#include <stdlib.h>
#include <math.h> /*pour augmenter le nombre d'operations connues par l'ordinateur ... l'arondi , puissance ect. */
/* pour apprendre le C .
Une variable est constituée d'une valeur et d'un nom .
le nom de la variable dois commencer par une lettre être consituée seulement de minuscule, majuscule et chiffres.
Les espaces ne fonctionne pas mais ont peu mettre des "underscore" ex = VaRiaBle_2 .
C'est aussi un language qui "respect la casse" ça veux dire qu'il prend en compte les minuscules et majuscule . ex var et Var sont différent .
ont peux aussi crée des "const" sans l'abréger ça donne constante, c'est une variable qui ne pourras pas être changer .
*/
int main()
{
    int var1 =10 , var2 = 5 , var3 = 0;
    printf (" la valeur de la var1 est %d\n",var1);
    printf (" si je veux changer la valeur de var1 qui est de %d je dois donc ecrire var1=9; ",var1);
    var1 = 8;
    printf (" finalement , j'ai changer d'avis la valeur de var 1 est %d ! \n\n",var1);
    printf (" je peux aussi afficher deux variable dans un printf ex: var 1 = %d  var 2 = %d \n\n",var1,var2);
    printf ("quel est la valeur de var3 ? ");
    scanf ("%d",&var3);
    printf ("la valeurs de var 3 est %d ! \n\n",var3);
/* pour faire des calcules ont a à notre dispo + plus, moins -,modulo %,division / et *multiplications.
   si je veux un resultat en chiffres decimal il faut que je change int par double et que je rajoute un point pour les chiffres après la virgule.
*/
    int result = 0;
    result = 4/2;
    printf ("4/2 = %d\n", result);
    double result2 =0;
    result2 = 5.0/2.0;
    printf ("5/2 = %lf\n",result2);


    return 0;
}
