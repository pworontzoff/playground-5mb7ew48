# Exercice 6 (pointeurs)

Ecrire une fonction permettant de remplir une structure DMS (avec 3 champs de type int nommés `degrees`, `minutes` et `seconds`) de coordonnées géographiques (une latitude ou une longitude exprimée en degrés, minutes et secondes).
Vous veillez à 
+ déclarer une structure DMS
+ écrire un main dans lequel vous déclarez une variable de type DMS 
+ appeler dans le main la fonction qui permet d'initialiser("remplir") la variable
+ afficher le contenu de la variable dans le main après l'appel à la fonction d'initialisation du point précédent.

NB: l'opération `.` d'accès aux champs d'une structure est prioritaire à l'opération `*` de déréférencement de pointeurs ! De sorte que (en supposant une structure possédant un champ nommé `champ` et un pointeur vers cette structure, nommé `pStruct`) : `*pStruct.champ` va d'abord chercher à accéder au champ `champ` de la structure `pStruct` qui n'est pas une structure (mais bien un pointeur vers une structure), ce qui provoquera une erreur ! On peut s'en sortir grâce aux parenthèses, évidemment (afin d'inverser cette priorité d'opération problématique) !
