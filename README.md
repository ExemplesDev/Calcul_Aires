# Code C++ "Calcul des aires" : démonstration d'une analyse qualité logicielle avec sonarQube

## Objectifs

Cet exemple, basé sur du code C++, permet de dérouler entièrement les phases suivantes:

* Développement ou modification de fichiers source C++ (.cpp et .h)
* Edition de tests unitaires (basés sur le framework gtest)
* Lancement des outils qualité
* Obtention du tableau de bord SonarQube


## Pre-requis

Ces logiciels doivent avoir été installés et configurés (versions utilisées entre parenthèses)

- Linux. La plupart des linux courants (CentOs, Debian, Fedora ...) conviennent (CentOS 7)
- gcc (4.8.5)
- GNU Make (3.82)
- sonarQube (5.6.6)
- sonar-scanner (3.0.3.778)
- cppcheck (1.80)
- valgrind (3.11.0)
- vera++ (1.3.0)
- rats (2.4)
- gcovr (3.3)
- doxygen (1.8.13)

## Installation

Se placer sur un répertoire de travail

`$ git clone https://github.com/ExemplesDev/Calcul_Aires.git`

Lancer le Makefile
`$ make`

Ces exécutables devraient avoir été générés sous le répertoire build/ :

```
[user@localhost Calcul_Aires]$ ls -al build/
total 2520
drwxrwxr-x 2 user user    4096 nov.  28 18:35 .
drwxrwxr-x 6 user user    4096 nov.  28 18:34 ..
-rwxrwxr-x 1 user user   68664 nov.  28 18:35 calcul_aires
-rw-rw-r-- 1 user user   72344 nov.  28 18:35 libFormesGeometriques.a
-rwxrwxr-x 1 user user 1215104 nov.  28 18:35 test_Rectangle
-rwxrwxr-x 1 user user 1211376 nov.  28 18:35 test_Triangle
```

## Lancement du programme principal et des 2 tests unitaires

* Executer le programme principal: 
`$ /build/calcul_aires`
* Executer les tests unitaires
`$ ./build/test_Rectangle`
et `$ ./build/test_Triangle`
* Nettoyer les répertoires des binaires, fichiers objects et temporaires:
`$ make clean`

## Utilisation de sonarQube

* lancer les outils Qualité et sonarQube:
`$ make sonar`
* obtenir le tableau de bord sonarQube généré:
lancer un navigateur et aller sur cette adresse locale: http://localhost:9000/sonar/


## Description des répertoires et fichiers

### Répertoires principaux:

* src/ : code source C++
  * cli/ (=command line interface): programme principal (main.cpp)
  * lib/ (=library) : classes constituant la bibliothèque FormesGeometriques.a (utilisée par le programme principal)
* tests/ (=unit tests) : 
  * gtest-1.6.0/ : fichiers source du framework gtest (version 1.6.0), necéssaire pour l'exécution des tests unitaires
  * unittests/ quelques tests unitaitres de démonstration

### Fichiers spécifiques:

* ./sonar-project.properties : fichier de configuration de sonarQube


```
[user@localhost Calcul_Aires]$ tree -L 3
.
|-- Makefile
|-- sonar-project.properties
|-- src
|   |-- cli
|   |   |-- main.cpp
|   |   `-- Makefile
|   |-- lib
|   |   |-- Makefile
|   |   |-- Polygone.cpp
|   |   |-- Polygone.h
|   |   |-- Rectangle.cpp
|   |   |-- Rectangle.h
|   |   |-- Triangle.cpp
|   |   `-- Triangle.h
|   `-- Makefile
`-- tests
    |-- gtest-1.6.0
    |   |-- include
    |   `-- src
    |-- Makefile
    `-- unittests
        |-- Makefile
        |-- test_Rectangle.cpp
        `-- test_Triangle.cpp
```
