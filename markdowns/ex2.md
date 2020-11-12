# Exercice 2

Ecrire une fonction permettant de remplir une structure DMS (degrees minutes seconds) de coordonnées géographiques.
Vous veillez à 
+ déclarer une structure DMS
+ écrire un main dans lequel vous déclarez une variable de type DMS 
+ appeler dans le main la fonction qui permet d'initialiser("remplir") la variable
+ afficher le contenu de la variable dans le main après l'appel à la fonction d'initialisation du point précédent.

NB: l'opération `.` d'accès aux champs d'une structure est prioritaire à l'opération `*` de déréférencement de pointeurs ! De sorte que (en supposant une structure possédant un champ nommé `champ` et un pointeur vers cette structure, nommé `pStruct`) : `*pStruct.champ` va d'abord chercher à accéder au champ `champ` de la structure `pStruct` qui n'est pas une structure (mais bien un pointeur vers une structure), ce qui provoquera une erreur ! On peut s'en sortir grâce aux parenthèses, évidemment !