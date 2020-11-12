# Introduction aux pointeurs
Pour réaliser les exercices suivants il est utile d'avoir compris la théorie sur les pointeurs. Les pointeurs constituent une notion essentielle du langage C, mais néanmoins un peu complexe au début. Il faut prendre le temps de bien comprendre comment ils fonctionnent car beaucoup d'autres notions sont basées dessus.

## Rappels : 
1. Chaque variable est stockée à une adresse précise en mémoire.
1. Les pointeurs sont semblables aux variables, à ceci près qu'au lieu de stocker un nombre ils stockent l'adresse à laquelle se trouve une variable en mémoire.
1. Si on place un symbole `&` devant un nom de variable, on obtient son adresse au lieu de sa valeur (ex. : `&age`).
1. Si on place un symbole `*` devant un nom de pointeur, on obtient la valeur de la variable stockée à l'adresse indiquée par le pointeur.

## Exemple 1

Essayer le code ci-dessous.

**Note** : `%p` permet d'afficher une adresse.

```C runnable
#include <stdio.h>

int main() {
	int a = 55, b = 66, c = 77;

	printf("L'adresse de a avant incrémentation : %p\n", &a);
	printf("L'adresse de b avant incrémentation : %p\n", &b);
	printf("L'adresse de c avant incrémentation : %p\n", &c);

	a++;
	b++;
	c++;

	printf("\nL'adresse de a après incrémentation :  %p\n", &a);
	printf("L'adresse de b après incrémentation :  %p\n", &b);
	printf("L'adresse de c après incrémentation :  %p\n", &c);

	return 0;
}

```
On peut remarquer que l'adresse des variables `a`, `b` et `c` est la même avant et après la modification. L'adresse de la variable est bien indépendante de la valeur de la variable. 

?[Que constatez-vous lors de l'exécution]
- [ ] L'adresse des variables a, b et c est différente avant et après la modification.
- [x] L'adresse des variables a, b et c est la même avant et après la modification.
- [x] L'adresse d'une variable est indépante de la valeur de la variable.
- [ ] L'adresse d'une variable dépend de la valeur de la variable.


## Exemple 2

Avant de compléter le code, exécuter le une fois pour constater les valeurs de `pta` et `ptb`. Une fois compléter exécuter le code plusieurs fois.

```C runnable
#include <stdio.h>

int main() {
    int a;
    int b;
    int *pta;
    int *ptb;    
    
    //Partie à compléter pour que :
    // - pta pointe vers a
    // - ptb pointe vers b
    
    printf("Adresse de a (direct) %p\n",&a);
    printf("Adresse de a %p\n\n",pta);
    printf("Adresse de b (direct) %p\n",&b);
    printf("Adresse de b %p\n",ptb);
    
    return 0;
}

```

?[Que constatez-vous lors des différentes exécutions]
- [ ] Rien
- [x] Les adresses changent lors de chaque exécution
- [ ] Les adresses sont toujours les mêmes
- [x] Si pta et/ou ptb n'ont pas été affecté leur valeur n'ont pas de sens

## Exemple 3

```C runnable
#include <stdio.h>

int main()
{
	int a = 55;
	int *pa = &a;

	printf("L'adresse de a est %p\n", &a);
	printf("Le contenu de a est %d\n", a);
	printf("Le contenu de pa  est %p\n", pa);
	printf("L'adresse de pa  est %p\n", &pa);

	return 0;
}
```

?[Que constatez-vous lors de l'exécution]
- [x] *pa == a car pa = &a
- [ ] pa == a car pa = &a
- [ ] *pa == &a car pa = a
- [ ] *pa == &a car *pa = &a

## Exemple 4

Cependant il faut être attentif au contexte dans lequel s'utilise une variable. Dans l'exemple qui suit, nous avons `f()` qui est appelé une fois depuis le `main()` et une autre depuis `g()`. Chaque appel de `f()` produit un contexte différent pour son paramètre `p`.

```C runnable
#include <stdio.h>

void f(int p) {
	printf("L'adresse de p dans f() est %p\n", &p);
	printf("Le contenu de p dans f() est %d\n",p);
}

void g(int a) {
	printf("L'adresse de a dans g() est %p\n", &a);
	printf("Le contenu de a dans g() est %d\n",a);
	f(a);
}

int main() {
	int a = 55;

	printf("L'adresse de a dans main() est %p\n", &a);
	printf("Le contenu de a dans main() est %d\n", a);
	f(a);
	g(a);

	return 0;
}
```

?[Que constatez-vous lors de l'exécution]
- [ ] La variable a dans g() est strictement la même que celle dans le main().
- [ ] La varialbe a dans g() n'a aucun lien avec la variable a dans le main().
- [x] La variable a dans g() est une copie de la valeur de la variable a dans le main().
- [ ] La variable p dans f() n'a aucun lien avec la variable a dans le main().
- [x] La variable p dans f() est une copie de la valeur de la variable a dans le main().
- [x] Les variables a dans le main(), a dans g(p) et p dans f() sont toutes dans des contextes différents.
# Quizz

Afin de tester votre compréhension de la matière, complèter [ce questionnaire](https://goo.gl/forms/C3WkjJmB18vOww2C3)