# Exercice 3 (vecteurs) : COMPTER LES OCCURRENCES DANS UN VECTEUR

+ Remplir un vecteur `va` de `n` (choisi par l'utilisateur) valeurs aléatoires comprises entre 0 et 10 (inclus).
+ Déterminer `k` tel que :
  + `k` vaut -1 si tous les éléments de va sont égaux à 0 
  + On affichera ensuite chacune des `n` valeurs dans le vecteur avec sa fréquence (le nombre de fois que cette valeur apparaît dans ce même vecteur).

Exemple avec le vecteur `va` de 4 cases `8|9|9|1` :
```shell
Voici les 4 nombres aleatoires entre 0 et 10 (compris) avec leurs frequences :
1) 8 (frequence 1).
2) 9 (frequence 2).
3) 9 (frequence 2).
4) 1 (frequence 1).
```

NB :

1. Il est permis de déclarer et d'utiliser un deuxième vecteur dans sa solution.
1. Pour cet exercice, on travaille à l’aide d’un vecteur d’entiers (va, v, vMv …) de taille 100 et d’un
entier n dont l’utilisateur choisit la valeur (< 100). L’entier n donnant la taille (utile) du vecteur.

! On devra prendre soin de définir 100 à l’aide d’un #define.
