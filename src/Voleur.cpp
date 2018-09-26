/*
 * Voleur.cpp
 *
 *  Created on: 26 sept. 2018
 *      Author: Vincent
 */

#include "Voleur.h"

namespace DonjonEtDragons {

Voleur::Voleur() : Joueur() {
	this->finesse = 0;
}

Voleur::Voleur(string nom) : Joueur(nom) {
	this->nom = nom;
	this->finesse = 0;
}

Voleur::Voleur(string nom, int finesse) : Joueur(nom) {
	this->nom = nom;
	this->finesse = finesse;
}

Voleur::Voleur(string nom, int armure, int finesse) : Joueur(nom, armure) {
	this->nom = nom;
	this->armure = armure;
	this->finesse = finesse;
}

Voleur::~Voleur() {}

string Voleur::exporter() {
	return "<Voleur><nom></nom><armure></armure><finesse></finesse></Voleur>";
}

} /* namespace DonjonEtDragons */
