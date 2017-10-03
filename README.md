# intro-progra-uliege-bac1

Voici les résumés et autres infos sur la matière du cours donné par B. Donnet à l'Uliege. Tout est complété par l'expérience personnelle mais aussi le cours [Apprenez à programmer en c!](https://openclassrooms.com/courses/apprenez-a-programmer-en-c) sur openclassroom, soyez libre de suggerer des modifications (erreurs, ajouts, clarifications...) le but est de tous nous aider et d'aider ceux qui passerons après nous.

* Le contenu principal du cours est dans le fichier summary.md
* Les regles de type de résultats des opérations est dans le fichier crossing.c, le résultat est à la fin du fichier, en commentaire

Le code pouvant générer le code nécessaire au fichier crossing.c est le suivant (python):
``` py
l=list("azertyuiopq")
for i in l:
  for j in l:
    print("printf(\"%s + %s is %s\\n\", typename("+i+"), typename("+j+"), typename("+i+" + "+j+"));")
```
