/*
 * Archer.cpp
 *
 *  Created on: 26 sept. 2018
 *      Author: Vincent
 */

#include "Archer.h"
#include "Arme.h"
#include <sstream>

namespace DonjonEtDragons {

Archer::Archer() : Joueur() {
	this->agilite = 0;
	this->arme = new Arme("Arc", 75);
}

Archer::Archer(string nom) : Joueur(nom) {
	this->nom = nom;
	this->agilite = 0;
	this->arme = new Arme("Arc", 75);
}

Archer::Archer(string nom, int agilite) : Joueur(nom) {
	this->nom = nom;
	this->agilite = agilite;
	this->arme = new Arme("Arc", 75);
}

Archer::Archer(string nom, int armure, int agilite) : Joueur(nom, armure) {
	this->nom = nom;
	this->armure = armure;
	this->agilite = agilite;
	this->arme = new Arme("Arc", 75);
}

Archer::~Archer() {
	delete this->arme;
}

string Archer::exporter() {
	stringstream xml;
	xml << "<Archer><nom>" << this->nom << "</nom><armure>"<< this->armure << "</armure><agilite>" << this->agilite << "</agilite></Archer>";
	return xml.str();
}

} /* namespace DonjonEtDragons */
