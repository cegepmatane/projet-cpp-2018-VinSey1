/*
 * Archer.cpp
 *
 *  Created on: 26 sept. 2018
 *      Author: Vincent
 */

#include "Archer.h"

namespace DonjonEtDragons {

Archer::Archer() : Joueur() {
	this->agilite = 0;
}

Archer::Archer(string nom) : Joueur(nom) {
	this->nom = nom;
	this->agilite = 0;
}

Archer::Archer(string nom, int agilite) : Joueur(nom) {
	this->nom = nom;
	this->agilite = agilite;
}

Archer::Archer(string nom, int armure, int agilite) : Joueur(nom, armure) {
	this->nom = nom;
	this->armure = armure;
	this->agilite = agilite;
}

Archer::~Archer() {}

string Archer::exporter() {
	return "<Archer><nom></nom><armure></armure><agilite></agilite></Archer>";
}

} /* namespace DonjonEtDragons */
