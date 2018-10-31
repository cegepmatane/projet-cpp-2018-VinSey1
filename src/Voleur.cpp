/*
 * Voleur.cpp
 *
 *  Created on: 26 sept. 2018
 *      Author: Vincent
 */

#include "Voleur.h"
#include "Arme.h"
#include <sstream>

namespace DonjonEtDragons {

Voleur::Voleur() : Joueur() {
	this->texturePersonnage->loadFromFile("data/illustrations/voleur.png");
	this->finesse = 0;
	this->arme = new Arme("Dague", 50);
}

Voleur::Voleur(string nom) : Joueur(nom) {
	this->texturePersonnage->loadFromFile("data/illustrations/voleur.png");
	this->finesse = 0;
	this->arme = new Arme("Dague", 50);
}

Voleur::Voleur(string nom, int finesse) : Joueur(nom) {
	this->texturePersonnage->loadFromFile("data/illustrations/voleur.png");
	this->finesse = finesse;
	this->arme = new Arme("Dague", 50);
}

Voleur::Voleur(string nom, int armure, int finesse) : Joueur(nom, armure) {
	this->texturePersonnage->loadFromFile("data/illustrations/voleur.png");
	this->finesse = finesse;
	this->arme = new Arme("Dague", 50);
}

Voleur::~Voleur() {
	delete this->arme;
}

string Voleur::exporter() {
	stringstream xml;
	xml << "<Voleur><nom>" << this->nom << "</nom><armure>"<< this->armure << "</armure><finesse>" << this->finesse << "</finesse></Voleur>";
	return xml.str();
}

} /* namespace DonjonEtDragons */
