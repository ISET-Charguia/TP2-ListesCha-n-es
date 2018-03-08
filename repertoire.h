/*
 * repertoire.h
 *
 *  Created on: 8 mars 2018
 *      Author: Hmida HMIDA
 */
#include<stdio.h>
#include<stdlib.h>

/* D�finition d'une fiche du r�pertoire */
typedef struct {
	char nom[21];
	char prenom[21];
	char tel[9];
} fiche, *ficheptr;

/* D�finition d'un onglet */
typedef struct {
	ficheptr lafiche;
	ongletptr suivante;
} onglet, *ongletptr;

/* D�finition du r�pertoire */
typedef ongletptr repertoire[26];

/* D�claration des fonctions � d�finir */
void afficheRepertoire(repertoire lerepertoire);
void afficheOnglet(ongletptr longlet);
void afficheFiche(ficheptr lafiche);
void ajouterFiche(repertoire lerepertoire, ficheptr lafiche);
void majuscule(ficheptr lafiche);
void ajouterDansOnglet(ongletptr longlet, ficheptr lafiche);
int avant(ficheptr fiche1, ficheptr fiche2);
void repertoireVide(repertoire lerepertoire);
void menu(repertoire lerepertoire);
void freeRepertoire(repertoire lerepertoire);
