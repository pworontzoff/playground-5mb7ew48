# Introduction

Les exercices de cette séance portent :
+ D'abord sur les vecteurs manipulés par des fonctions. Nous utiliserons une notation particulière du C qui permet de travailler sur les vecteurs (les consulter, mais surtout les modifier) dans des fonctions facilement. Cela permet de cacher le fait que des vecteurs passés en paramètres de fonctions ne sont pas des copies de ces vecteurs. Ce qui est passé en paramètre de la fonction est en fait un pointeur vers la première cellule du vecteur&nbsp;;
+ Ensuite, on revient sur la notion de pointeurs qui reste essentielle en C&nbsp;;
+ Enfin, facultativement, 2 énoncés permettent d'utiliser explicitement les pointeurs pour travailler sur les vecteurs (les consulter, mais surtout les modifier) dans des fonctions.

Pour réaliser ces exercices, vous veillerez également à employer les techniques vues lors des précédentes séances.

Sauf si l'énoncé permet d'encoder directement du code, cette série d'exercice est à résoudre avec Visual Studio.

## Pour rappel
Visual Studio est disponible gratuitement (https://ecolevirtuelle.provincedeliege.be/ctrl/ctrl_gestion.openDocument?p_idNode=1177603)

Une fois Visual Studio installé, vous pouvez créer **un projet par exercice** !! (Fichiers > Nouveau > Projets...) 

Au départ, vous pouvez toujours commencer par taper (ou copier-coller ;-D) les lignes suivantes :
```c
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int main()
{

    return 0;
}
```

Ensuite, vous pouvez écrire votre code en ligne 7 juste avant l'instruction `return 0;`

Le bouton "Exécuter sans débogage" (triangle "play" vert) permet de recompiler et exécuter tout votre projet.

À toutes fins utiles, voici à nouveau le document contenant des infos utiles sur l'utilisation du debogueur de Visual Studio&nbsp;: https://ecolevirtuelle.provincedeliege.be/ctrl/ctrl_gestion.openDocument?p_idNode=1177599
