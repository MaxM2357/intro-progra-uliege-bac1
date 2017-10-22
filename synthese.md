# PROGRAMMATION - SYNTHESE

Table des matières
=================

   * [Vocabulaire](#vocabulaire)
   * [Types Primitifs](#types-primitifs)
      * [Nombres Entiers](#nombres-entiers)
      * [Nombres à virgules](#nombres-à-virgules)
      * [Casting](#casting)
         * [Casting implicite](#casting-implicite)
         * [Casting explicite](#casting-explicite)
      * [Opérateurs sur les types primitifs](#opérateurs-sur-les-types-primitifs)
         * [Arithmétiques](#arithmétiques)
         * [Contitionnels](#contitionnels)
         * [Operateurs raccourcis](#operateurs-raccourcis)
      * [Opérateurs sur bits](#opérateurs-sur-bits)
         * [Conditionnels](#conditionnels)
         * [Operateurs raccourcis](#operateurs-raccourcis-1)
         * [Décalages](#décalages)
      * [Priorité des opérateurs](#priorité-des-opérateurs)
   * [Flux de contrôles](#flux-de-contrôles)
      * [Conditions](#conditions)
         * [Principe de base](#principe-de-base)
         * [Condition ternaire](#condition-ternaire)
      * [Boucles](#boucles)
   * [Pointeurs](#pointeurs)
   * [Tableaux](#tableaux)
      * [Tableaux unidimensionnels](#tableaux-unidimensionnels)
   * [Entrée et sortie (I/O)](#entrée-et-sortie-io)
      * [Printf](#printf)
      * [Scanf](#scanf)
      * [Formatage](#formatage)
   * [Compilation](#compilation)
      * [Avec IDE](#avec-ide)
      * [Sans IDE](#sans-ide)

## Vocabulaire

* **Compilation** : Le *compilateur* transforme un fichier `.c` en un fichier binaire par le biais de la compilation. C'est donc l'action de transormer un *code source* lisible et compréhensible humainnement en un fichier composé de 1 et 0 destiné à l'ordinateur.
* **Compilateur** : Autre programe chargé de la *compilation* du *code source*.
* **Incrémentation** : L'incrémentation d'une *variable* est l'augmentation de sa valeur d'une unité spécifiée ou implicite, ex: `myVar += d;` ou `myVar++;`
* **Décrémentation** : La décrémentation d'une *variable* est la diminution de sa valeur d'une unité spécifiée ou implicite, ex: `myVar -= d;` ou `myVar--;`
* **Variable** : Référence dans le code source à une valeur qu'on enregistre en mémoire afin de l'utiliser dans des opérations.
* **Entree / Sortie standard** : Respectivement le clavier et l'écran de la console, ceux-ci peuvent être modifié mais c'est laissé aux plus expérimentés.
* **Type** : Valeur fixe associée à une variable permettant de les classifier en plusieurs groupes, chaque type remplis un ensembles de fonctions pour lequel il est le mieux adapté.
* **Affectation / Assignement** : Fait d'associer une valeur (numérique, textuelle, binaire, etc) à une *variable*.
* **Pointer sur** : Etat pour une variable de type pointeur de posséder en contenu l'adresse mémoire d'une autre variable.
* **RAM** (Random Access Memory) : Là où toutes les variables déclarées sont enregistrées.
* **bit** : Unité de stockage en mémoire.
* **byte** : Unité de stockage en mémoire telle que 1 byte = 8 bits.
* **mot** : Association de 4 bytes en mémoire, la plupart des *variables* sont enregistrées sur un mot.
* **Instruction** : Ordre d'effectuer une action précise pour la machine
* **Bibliothèque** : Souvent appelée, à tort, librairie c'est un fichier tierce obtenu qui contient des instructions qui ne sont pas nécessairement connue, bien qu'on puisse les utiliser dans une certaine mesure.
* **Indentation** : Pratique utilisée par les développeurs / codeurs qui consiste à faire précéder chaque ligne d'un nombre spécifique d'espace/tabulation afin de donner une meilleure visibilité au code.
* **Invariant de boucle** : Propriété sur un ensemble de *variable* d'un programme qui reste "vrai" avant et après chaque itération de la *boucle*. Il peut s'exprimer de manière formelle (par une formulle mathématique), littéralle, graphique, ...

## Types Primitifs

Format: `signe type nom [= valeur];`
Les crochets représentent des options facultatives et la bare verticale un choix entre certaines valeurs.
Toutes les options ne sont pas nécessairement disponibles.

### Nombres Entiers

| Type | Taille (Bytes) | Signe | Minimum | Maximum | Identifieur commun | Commentaires|
|:--|:--|:--|:--|:--|:--|--:|
| char | 1 | signed **par défaut** | -2^7 | 2^7-1 | `%c` | peut être initialisé avec un caractère ASCII entre ' ' ou un entier |
|||unsigned | 0 | 2^8-1 | `%c` | | |
| short int | 2 | singed **par défaut** | -2^15 | 2^15-1 | `%hi` | la partie `int` dans le nom n'est pas obligatoire, utilisé pour les nombres plus petit |
||| unsigned | 0 | 2^16-1 | `%hu` | | |
| int | 4 | signed **par défaut** | -2^31 | 2^31-1 | `%d` | le plus utilisé pour la gestion d'entier |
||| unsigned | 0 | 2^32-1 | `%u` | | |
| long int | 8 | signed **par défaut** | -2^63 | 2^63-1 | `%ld` |utilisé pour les nombres plus grands |
||| unsigned | 0 | 2^64-1 | `%lu` | | |

### Nombres à virgules

Tout ces types sont signés, le minimum est donc l'opposé du maximum. Cependant ils possèdent un minimum positif non null (soit un nombre a très petit tel que 1+a != 1, à voir dans le fichier types_info.c)

| Type | Taille (Bytes) | Maximum | Décimales exactes | Identifieur commun |
|:--|:--|:--|:--|:--|
| float | 4 | 3.4028234664e+38 | 6 | `%f` |
| double | 8 | 1.7976931349e+308 | 15 | `%lf` |
| long double | 16 | 1.1897314954e+4932 | 18 | `%Lf` |

* **Ces chiffres proviennent d'experiences sur un ordinateur en particulier, ils peuvent différer légerement sur un autre, à voir dans le fichier types_info.c**
* Plus d'informations sur les identifieurs peuvent êtres trouvées dans la section [entrée et sortie](#formatage)

Ex:
```c
unsigned short int e; // equivalent à unsigned short
signed int r;
signed long int t; // equivalent à signed long
long double q;
```

* Toutes  ces déclarations peuvent être préfixée par `const`, la variable devient alors constante, impossible de lui affecter une nouvelle valeur, les opérations telles que const += autre_variable renvoie une erreur de compilations.  
Ex:

```c
const short int var = 0;
var++; //renvoie un erreur
```

* Pour un int, si le prefice long ou short est utilisé, la mention `int` devient facultative, on peut donc écrire `short var;` au lieux de `short int var;`
* Chacun de ces types primitifs peut être déclaré sous forme de pointeur (un chapitre y est consacré) comme suit: `int* pointeur_sur_int = &normal_int;`
* Si vous déclarer un pointeur constant, seule l'adresse enregistrée dans le pointeur est constante, la valeur à cette adresse peut toujours être modifiée.
* Chacun de ces types primitifs peut être déclaré sous forme de tableau comme suit: `int tableau_de_int[taille_du_tableau];`


### Casting

La *type cast* ou *casting* est le changement du type d'une valeur. Le type d'une variable etant fixé, le casting ne s'opère pas directement sur la variable mais assigne la valeur de la première variable, **transformée dans un autre type** à une autre variable.


#### Casting implicite

Le changement du type se fera naturellement si besoin.

* Les types `char` et `short` sont transformé en int à chaque opération, peut importe le résultat
* Le type avec la plus grande capacité ou précision domine lors d'une opération : `int` => `long` => `float` => `double` => `long double`
* Lors de l'assignation, le type attendu est respecté

Ex: `int a = 2; float b = 3.4; long double c = 2.71;` `a*b` sera `float` et `a*c` sera un `long double`
Ex:
```c
long double ld_pi = 3.1415926535897931;
int int_pi = ld_pi; // int_pi vaut 3 et est de type entier, comme attendu
```

#### Casting explicite

* Il suffit de placer entre paranthèses le type dans lequel on souhaite convertir une variable

Ex:
```c
int a = 7, b = 10;
printf("%d", a / b); // affiche 0
printf("%f", (float) a / (float) b); // affiche 0.7000000
```

### Opérateurs sur les types primitifs


#### Arithmétiques

* `+`, `-`, `*`: *implicite*
* `/`: sur des entiers (int/char) il renvoie le resultat de la division eucledienne, donc **toujours un entier si les opérands sont entier**, sur des nombres à virgules le fonctionnement est implicite.
* `%`: sur des entiers uniquement, il renvoie le reste de la division eucledienne.

On a donc :
```c
int numerateur = 10;
int diviseur = 7;
int quotient = numerateur / diviseur;
int reste = numerateur % diviseur;

int test1 = diviseur*quotient == numerateur; // vaut 0 => FAUX
int test1 = diviseur*quotient + reste == numerateur; // vaut 1 => VRAI
```

* Lors d'opérations sur des variables de type char, leur valeur est utilisée en utilisant le nombre associé au caractère utilisé pour la définition grâce à la table ASCII et elle est transformée en int.

**RAPPEL: aucun opérateur standard n'existe pour les puissances entières**  
Pour ce faire il convient de faire une boucle (cf Flux de contrôles/Boucles)

```c
// calculer la n-ième puissance de x
int n; // doit être entier
float x; // peut importe de type du moment qu'il représente un nombre
for (int i = 1; i < n; i++) { // ici, i commence à 1 et non 0 car x est la puissance 1 de x
	x *= x;
}
// x vaut maintenant la n-ième puissance de la valeur de départ
```

* **Plus compliqué :** pour les puissances rationnelles (0.5, 3.1415, ... = n/d) il convient de soit approcher la racine d - ème de la n - ième puissance du nombre par approximation ou une exponentielle. La fonction exp est disponible dans la bibliothèque math.h.

#### Contitionnels

Une condition évalue 0 à la valeur FAUX et n'importe quoi d'autre à VRAI

* == (égalité)   
/!\ respecte le type aussi !
* != (différence)   
/!\ respecte le type aussi !
* <, >, <=, >=  
*implicite*
* && ("et" parresseux)  
a && b => donne la valeur de a si a == 0 sinon celle de b <sup>1</sup>
* || ("ou" paresseux)  
a || b => donne la valeur de a si a != 0 sinon celle de b <sup>1</sup>

> <sup>1</sup> : Il ne donne pas réellement la valeur mais 1 si cette valeur est non nulle, sinon 0.

* Ces deux opérateurs sont dit parresseux car s'ils déduisent la réponse du premier, ils n'évaluent pas le deuxième, ex: si on écrit a && b et que a est égal à 0, le compilateur n'ira pas lire b.


#### Operateurs raccourcis
* `x = x + c` équivalent à `x += c`
* `x = x - c` équivalent à `x -= c`
* `x = x / c` équivalent à `x /= c`
* `x = x * c` équivalent à `x *= c`
* `x = x % c` équivalent à `x %= c`

### Opérateurs sur bits

#### Conditionnels

Ils comparents la forme en bits des valeurs, applicables donc sur tout les types simples.

* & ("et") revoie 1 si les deux bit sont 1, 0 sinon  
Ex: `0101 & 0110` = `0110`
* | ("ou") revoie 1 si au moins un des 2 bits est 1  
Ex: `0101 | 0110` = `0111` 
* ^ ("ou" strict) revoie 1 si 1 seul des deux bits est 1  
Ex: `0101 ^ 0110` = `0011`

#### Operateurs raccourcis
* `x = x & c` équivalent à `x &= c`
* `x = x | c` équivalent à `x |= c`
* `x = x ^ c` équivalent à `x ^= c`

#### Décalages

Ils opèrent sur la transcription d'une valeur en binaire, ils sont donc applicables sur tout les types.

Ex:

```c
int valeur;
int decalage;
int valeur_decalee1 = valeur << decalage;
int valeur_decalee2 = valeur >> decalage;
```

Illustrations:

``` c
6 << 1;
=> 00000110 << 1
=> 00001100
```

``` c
6 >> 1;
=> 00000110 >> 1
=> 00000011
```

``` c
-6 << 1;
=> 11111010 << 1
=> 11110100 // ajoute un 0 au lieux de remettre le premier à la fin
```

``` c
-6 >> 1;
=> 11111010 >> 1
=> 11111010 // ajoute un 1 au lieux de remettre le dernier au début (car le nombre est négatif)
```

### Priorité des opérateurs
* Les différentes opérations sur un même échelons se lisent de gauche à droite

1. `()` `[]`
2. `--` `++` `-`<sup>2</sup>
3. `*` `/` `%`
4. `+` `-`
5. `<<` `>>`
6. `<` `<=` `=>` `>`
7. `==` `!=`
8. `&`
9. `^`
10. `|`
11. `&&` `||`
13. `=` `+=` `-=` `*=` `/=` `%=` `&=` `|=`

> <sup>2</sup> : Signe moins unitaire, négation et non pas différence

## Flux de contrôles

* Pour chaque bloc de code d'un flux de contrôle, s'il ne prend qu'une seule ligne les accolades de délimitation ne sont pas nécessaires

### Conditions

#### Principe de base

``` c
int cond = 0, cond2 = 1;

if (cond) {
	// code 1
} else if (cond2) {
	// code 2
} else {
	// code 3
}
```

Fonctionnement:  

SI cond != 0, code 1 est éxécuté  
SINON SI cond2 != 0, code 2 est éxécuté  **Non vu en cours mais utile**  
SINON code 3 est éxécuté

#### Condition ternaire
Cette condition n'a **pas été vue en cours** mais elle peut être utile et surtout plus courte.

``` c
int v1, v2, cond;
int result = ( cond ? v1 : v2 );
```

* result prend la valeur de v1 si cond != 0, sinon celle de v2
* result, v1 et v2 doivent impérativement être du même type

### Boucles

``` c
int cond;

while (cond) {
	break; // passe au bloc suivant (ici, le bloc for)
}

for (int compteur = 0; cond; compteur++) {
	continue; // passe à l'itération suivante
}
```

* Aucunes des parties du for (initialisation / condition / incrementation) n'est obligatoire, il en résulte alors une boucle infinie
* Les mots-clefs `break` et `continue` n'ont pas été vu en cours mais leur utilisation reste assez intuitive


## Pointeurs

Le principe d'un pointeur est d'utilisé l'adresse en mémoire d'une variable plutôt que son contenu. C'est nécessaire car les fonctions (qui seront abordées plus tard dans le cours), telles que scanf, ne peuvent modifier une variable qu'on leur donne directement. On leur donne donc une adresse et elles vont modifier la valeur à cette adresse en mémoire. (On aura cependant pas besoin d'utiliser de pointeur pour printf car printf ne modifie pas la valeur, elle ne fait que l'afficher)

``` c
int s; //1
int* pointeur_sur_s = &s; //2
printf("Saisissez une valeur pour s: ");
scanf("%d", &s); //3
printf("%d\n", *pointeur_sur_s); //5
```

1. On défini une variable normale
2. `&` : opérateur de REFERENCEMENT, renvoie l'adresse qui est
3. On donne l'adresse de s afin que `scanf` puisse y insérer une valeur qu'on utilisera.
4. `*` : opérateur de DE-REFERENCEMENT, renvoie la valeur en mémoire à l'adresse du pointeur.

## Tableaux

### Tableaux unidimensionnels

Les tableaux (*arrays* en anglais) représentent une liste d'éléments homogènes (tous du même type), leur capacité est *finie* et **constante**. Tout les éléments sont accessibles par un indice entier positif indépendant des autres, les indices vont de 0 à la capacité du tableau moins 1.   
On les déclare de cette manière : `type_du_tableau nom_du_tableau[taille_du_tableau];`  
On peut accéder aux éléments avec l'indice grâce à ce format = `nom_du_tableau[indice]`, on peut y assigner une valeur pour vu que le tableau ne soit pas déclaré constant ou obtenir la valeur qui y était précédemment.
On peut leur assimiler une valeur par défaut, ex : `int valeurs_booleene[2] = {-1, 1};` où `valeurs_booleene[0]` est 1 et `valeurs_booleene[1]` est -1. Un tableau constant doit donc obligatoirement avoir une valeur par défaut.

Ex d'utilisation :
```c
const unsigned short taille = 4;
int elements[taille];
int i;

printf("Remplissage du tableau : ");
for (i = 0; i < taille; i++) {
	printf("Entrez le %d-ème elements (entier): ", i);
	scanf("%d", &elements[i]);
}

printf("Affichage du tableau : ");
for (i = 0; i < taille; i++) {
	printf("%d", elements[i]); // affiche l'element i
	if (i != taille-1)
		printf(", "); // pour plus de lisibilité
	else
		printf("\n");
}
```

## Entrée et sortie (I/O)

Globalement les fonctions `scanf`et `printf` sont les plus utilisées. Elles nécessitent d'importer la bibliothèque stdio comme suit: `#include <stdio.h>`.

### Printf
La fonction `printf` s'utilise avec 1 premier paramètre étant le texte à afficher, entre guillemets (avec ou sans identifiants de formatage) et ensuite autant de paramètre qu'il y a d'identifiants de formatage. Elle affiche le texte formaté dans la sortie standard.

### Scanf
La fonction `scanf` s'utilise avec 1 premier paramètre étant le texte qui doit être saisis, entre guillemets (de préférence avec identifiants de formatage) et ensuite autant de paramètre qu'il y a d'identifiants de formatage. Elle récupère du texte formaté depuis l'entree standar.
NB: on peut demander un format très précis tel que `"%d-%d-%d"` afin de demander une date par exemple mais si ne serait-ce que les tirets ne sont pas respectés, aucune valeur ne sera réccupérée.
NB: bien penser à *référencer* ses variables lorsqu'on les passe dans scanf pour que cette dernière puisse y placer les bonnes valeurs.

### Formatage

| Spécificateur de format |  Description | Types de données supportés |
| :-- | :-- | :-- |
| **`%c`** |  Charactère |  `char`, `unsigned  char` |
| **`%d`** |  Entier signé |  `short`, `unsigned  short`, `int `, `long ` |
| `%e`, `%E` |  Notation scientifique des nombres à virgule |  `float`, `double ` |
| **`%f`** |  Nombre à virgule |  `float` |
| `%g`, `%G` |  Pareil que %e ou %E |  `float`, `double ` |
| **`%hi`** |  Entier signé (petit) |  `short` |
| **`%hu`** |  Entier non signé (petit) |  `unsigned short` |
| `%i` |  Entier signé |  `short`, `unsigned  short`, `int `, `long ` |
| **`%ld`**, `%l`, `%li` |  Entier signé |  `long` |
| **`%lf`** |  Nombre à virgule |  `double` |
| **`%Lf`** |  Nombre à virgule |  `long double` |
| **`%lu`** |  Entier non signé |  `unsigned int`, `unsigned  long` |
| `%lli`, `%lld` |  Entier signé |  `long long` |
| `%llu` |  Entier non signé |  `unsigned long long` |
| `%o` |  Représentation octale d'un entier |  `short`, `unsigned  short`, `int `, `unsigned  int`, `long ` |
| `%p` |  Adresse d'un pointeur sur `void` |  `void *` |
| `%s` |  Caractères (texte entre "") |  `char *` |
| **`%u`** |  Entier non signé |  `unsigned int`, `unsigned  long` |
| `%x`, `%X` |  Représentation octale d'un entier non signé |  `short`, `unsigned  short`, `int `, `unsigned  int`, `long ` |
| `%n` |  N'affiche rien | N/A |
| **`%%`** |  Affiche % | N/A |

NB:
* Utiliser `%d` pour l'affichage d'un float/double revient à afficher uniquement sa partie entière.
* Utiliser une syntaxe de type `%Nd` (N à remplacer explicitement) affiche un entier avec au moins N chiffres (en remplaçant par des espaces à l'avant si besoin)
* Utiliser une syntaxe de type `%.Nd` (N à remplacer explicitement) affiche un flottant avec ses décimales arrondies à la N-ième (si besoin) (fonctionne aussi pour les double et long double)

## Compilation

**Ceci n'est pas inclus dans la matière évaluée, il s'agit uniquement d'une aide pour la compilation des fichiers sources**
NB: ceci est couvert de façon plus détaillée dans [le deuxième chapitre du cours sur openclassroom](https://openclassrooms.com/courses/apprenez-a-programmer-en-c/ayez-les-bons-outils) ou sur [le site du cours](http://www.montefiore.ulg.ac.be/~bdonnet/info2009/documentation.html)

### Avec IDE

*IDE* : *Integrated Development Environment* Ou Environnement de Développement Inégré est un logiciel permettant de combiner les divers logiciels utilisés pour la réalisation d'un projet, nottement un *editeur*, un *compilateur* et un *débugger*. On écrit le code dans l'éditeur, on le compile par une action simple et le débugger nous aide à tester le projet.

Les plus connus:

* Multiplatforme : Code::Blocks
* Windows/Mac OS : Visual Studio
* Mac OS : XCode

### Sans IDE

On utilise n'impore quel éditeur pour faire son code source, on passe ensuite le code source au compilateur qui renvoie un fichier exécutable qu'on débug avec un débugger.

Editeurs connus:

* vi: disponible depuis un terminal UNIX (Linux/Mac OS) (coloration syntaxique en option).
* vim: version améliorée de vi, toujours dans le terminal.
* notepad++ (Windows): éditeur de texte très répendu
* Sublime Text (Multi - Payant avec version d'essai infinie)
* Atom (Mutli - Gratuit et Open Source)

Les trois plus grands OS ont chacun un éditeur de texte qui leur est propre et qui peut faire l'affaire

Compilateur:

* GNU Compiler Collection (gcc) : Installé sur la pluspart des sysmtème UNIX, complile le C, C++, obj-c, Fortran, Ada, et Go. Syntaxe: `gcc [-o outPutFile] inputfile.c`

Il en existe d'autre mais l'utilisation d'un IDE est souvent plus simple.
