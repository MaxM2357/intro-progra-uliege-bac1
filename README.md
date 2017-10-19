# intro-progra-uliege-bac1

Voici les résumés et autres infos sur la matière du cours donné par B. Donnet à l'Uliege. Tout est complété par l'expérience personnelle mais aussi le cours [Apprenez à programmer en c!](https://openclassrooms.com/courses/apprenez-a-programmer-en-c) sur openclassroom, soyez libre de suggerer des modifications (erreurs, ajouts, clarifications...) le but est de tous nous aider et d'aider ceux qui passerons après nous.

* Le contenu principal utile au cours est dans le fichier synthese.md
* Le fichier types_info.c affiche les informations telles que la taille ou les bornes des types primmitifs, qui peuvent varier selon la machine.
* Les règles des types de résultats des opérations étaient dans le fichier crossing.c, elles sont maintenants incluent (en plus résumé) dans la section *Casting implicite* du fichier synthese.md, pour ceux qui veulent, le code c supprimé peut être généré par le code python suivant.

Le code pouvant générer le code nécessaire au fichier crossing.c est le suivant (python):
``` py
    first_part="""
#define typename(x) _Generic((x), _Bool: "_Bool", unsigned char: "unsigned char", char: "char", signed char: "signed char", short int: "short int", unsigned short int: "unsigned short int", int: "int", unsigned int: "unsigned int", long int: "long int", unsigned long int: "unsigned long int", long long int: "long long int", unsigned long long int: "unsigned long long int", float: "float", double: "double", long double: "long double", char *: "pointer to char", void *: "pointer to void", int *: "pointer to int", default: "other")
#include <stdio.h>
int main(int argc, char* argv[]) {

    signed char a;
    unsigned char z;
    signed short int e;
    signed int r;
    signed long int t;
    unsigned short int y;
    unsigned int u;
    unsigned long int i;
    float o;
    double p;
    long double q;
"""

    last_part="""
    return 0;
}
"""

    l=list("azertyuiopq")
    operator=['+', '-', '*', '/']

    print(first_part)

    for o in operator:
      for i in l:
        for j in l:
          print("    printf(\"%s {0} %s is %s\\n\", typename({1}), typename({2}), typename({1} {0} {2}));".format(o, i, j))

print(last_part)
```
