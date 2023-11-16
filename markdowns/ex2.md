# Exercice 2 (vecteurs) : RECHERCHE EN TABLE DU DERNIER ÉLÉMENT NON NUL (facultatif)

+ Lire un nombre entier `n`, lire les n éléments d’un vecteur d’entiers `va`
+ Déterminer `k` tel que :
  + `k` vaut -1 si tous les éléments de va sont égaux à 0 
  + `k` vaut l’indice du dernier (de gauche à droite) élément de va différent de 0 (donc 0<=k<=n–1) 

NB : Pour cet exercice, on travaille à l’aide d’un vecteur d’entiers `va` de taille 100 et d’un
entier `n` dont l’utilisateur choisit la valeur (<= 100). L’entier `n` donnant la taille (utile) du vecteur.

! On devra prendre soin de définir 100 à l’aide d’un #define.


On devra utiliser une fonction dont le prototype est le suivant : 

```C
int find_nz(int va[N], int n); //le vecteur va et sa taille utile n (retourne -1 si tous les éléments à 0, sinon l'indice de la dernière val non nulle.
```

NB : Lors de l'appel à la fonction, on doit alors fournir simplement le nom du vecteur (sans crochets) et sa taille. On utilise ensuite ce vecteur dans la fonction avec la syntaxe habituelle (les crochets).