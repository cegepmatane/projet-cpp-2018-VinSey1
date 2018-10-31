/*
 * Magicien.cpp
 *
 *  Created on: 26 sept. 2018
 *      Author: Vincent
 */

#include "Arme.h"
#include <sstream>
#include "Magicien.h"

namespace DonjonEtDragons {

Magicien::Magicien() : Joueur() {
	this->texturePersonnage->loadFromFile("data/illustrations/magicien.png");
	this->magie = 0;
	this->arme = new Arme("Baton", 75);
}

Magicien::Magicien(string nom) : Joueur(nom) {
	this->texturePersonnage->loadFromFile("data/illustrations/magicien.png");
	this->magie = 0;
	this->arme = new Arme("Baton", 75);
}

Magicien::Magicien(string nom, int magie) : Joueur(nom) {
	this->texturePersonnage->loadFromFile("data/illustrations/magicien.png");
	this->magie = magie;
	this->arme = new Arme("Baton", 75);
}

Magicien::Magicien(string nom, int armure, int magie) : Joueur(nom, armure) {
	this->texturePersonnage->loadFromFile("data/illustrations/magicien.png");
	this->magie = magie;
	this->arme = new Arme("Baton", 75);
}

Magicien::~Magicien() {
	delete this->arme;
}

string Magicien::exporter() {
	stringstream xml;
	xml << "<Magicien><nom>" << this->nom << "</nom><armure>"<< this->armure << "</armure><magie>" << this->magie << "</magie></Magicien>";
	return xml.str();
}

} /* namespace DonjonEtDragons */
