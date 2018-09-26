/*
 * Pieds.cpp
 *
 *  Created on: 26 sept. 2018
 *      Author: Vincent
 */

#include "Pieds.h"

namespace DonjonEtDragons {

Pieds::Pieds() : Equipement() {
	this->bonusFuite = 0;
}

Pieds::Pieds(string nom) : Equipement(nom) {
	this->nom = nom;
	this->bonusFuite = 0;
}

Pieds::Pieds(string nom, int bonusFuite) : Equipement(nom) {
	this->nom = nom;
	this->bonusFuite = bonusFuite;
}

Pieds::Pieds(string nom, string rarete) : Equipement(nom, rarete) {
	this->nom = nom;
	this->rarete = rarete;
	this->bonusFuite = 0;
}

Pieds::Pieds(string nom, string rarete, int prix) : Equipement(nom, rarete, prix) {
	this->nom = nom;
	this->rarete = rarete;
	this->prix = prix;
	this->bonusFuite = 0;
}

Pieds::Pieds(string nom, string rarete, int prix, int bonusFuite) : Equipement(nom, rarete, prix) {
	this->nom = nom;
	this->rarete = rarete;
	this->prix = prix;
	this->bonusFuite = bonusFuite;
}

Pieds::~Pieds() {}

string Pieds::exporter() {
	return "<Pieds><nom></nom><rarete></rarete><prix></prix><bonusFuite></bonusFuite></Pieds>";
}

} /* namespace DonjonEtDragons */
