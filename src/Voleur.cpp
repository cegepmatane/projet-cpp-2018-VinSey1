/*
 * Voleur.cpp
 *
 *  Created on: 26 sept. 2018
 *      Author: Vincent
 */

#include "Voleur.h"
#include <sstream>

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
	stringstream xml;
	xml << "<Voleur><nom>" << this->nom << "</nom><armure>"<< this->armure << "</armure><finesse>" << this->finesse << "</finesse></Voleur>";
	return xml.str();
}

} /* namespace DonjonEtDragons */
