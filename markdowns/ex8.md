# Exercice 8 (vecteurs et pointeurs)

Cet exercice porte sur les manipulations de déclaration, d'initialisation et d'accès (lecture) sur les vecteurs de structures (via pointeurs).

Cet exercice se base sur des coordonnées terrestres (latitudes et longitudes) données en degrés décimaux (ex: 50.610991) et les calculs de distances peuvent se résoudre en utilisant le point 1 de la formule donnée dans l'exercice 4 de la série "3 - Les alternatives et les structures" : https://tech.io/playgrounds/55382/3---les-alternatives-et-les-structures/exercice-4-sur-9 et en utilisant également les formules données dans l'exercice 6 de la série "2 - Les variables" : https://tech.io/playgrounds/55269/2---les-variables/exercice-6


## Données et structures fournies

```c
//Structures utilisées
struct coordonnee_terrestre {
    float latitude;
    float longitude;
};

struct lieu {
    char nom[50];
    struct coordonnee_terrestre position;
};

//Données fournies
struct lieu DEA[11] = {{"HEPL Seraing",{50.610991,5.510627}},{"Pizzeria da Pepe",{50.612087,5.512236}},{"Le Kiwi",{50.609908,5.513781}},{"Internat",{50.613128,5.507708}},{"HEPL Jemeppe",{50.619317,5.515327}},{"Le Montesquieu",{50.618888,5.515349}},{"Acacia",{50.614504,5.509126}},{"CMI",{50.614974,5.513954}},{"EP Seraing",{50.614177,5.507302}},{"Poste Seraing",{50.610957,5.513493}},{"Maison de la Formation",{50.611876,5.512946}}};
```
 
## Exercice

Déclarer un vecteur de coordonnées géographiques et l'initialiser en "hardcodant" son contenu.
Sur ce vecteur, implémentez les deux  fonctionnalités dans le main:

1. demander à l'utilisateur d'encoder sa position (un point donné) et calculer la distance par rapport à ce point pour chaque entrée du vecteur
2. demander à l'utilisateur sa position (un point donné) ainsi qu'une distance X (en km). Afficher ensuite les points du vecteur se trouvant à une distance
inférieure à X de la position de l'utilisateur.

NB: Le tableau de structures DEA devra être passé par adresse à ces deux fonctions.
