/*
 * Joueur.cpp
 *
 *  Created on: 26 sept. 2018
 *      Author: Vincent
 */

#include "Joueur.h"
#include <sstream>

namespace DonjonEtDragons {

Joueur::Joueur() {
	this->armure = 0;
	this->nom = "Inconnu";
}

Joueur::Joueur(string nom) {
	this->armure = 0;
	this->nom = nom;
}

Joueur::Joueur(string nom, int armure) {
	this->armure = armure;
	this->nom = nom;
}

Joueur::~Joueur() {}

string Joueur::exporter() {
	stringstream xml;
	xml << "<Joueur><nom>" << this->nom << "</nom><armure>"<< this->armure << "</armure></Joueur>";
	return xml.str();
}

} /* namespace DonjonEtDragons */
