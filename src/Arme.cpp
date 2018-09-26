/*
 * Arme.cpp
 *
 *  Created on: 26 sept. 2018
 *      Author: Vincent
 */

#include "Arme.h"
#include <sstream>

namespace DonjonEtDragons {

Arme::Arme() : Equipement() {
	this->puissance = 0;
}

Arme::Arme(string nom) : Equipement(nom) {
	this->nom = nom;
	this->puissance = 0;
}

Arme::Arme(string nom, int puissance) : Equipement(nom) {
	this->nom = nom;
	this->puissance = puissance;
}

Arme::Arme(string nom, string rarete) : Equipement(nom, rarete) {
	this->nom = nom;
	this->rarete = rarete;
	this->puissance = 0;
}

Arme::Arme(string nom, string rarete, int prix) : Equipement(nom, rarete, prix) {
	this->nom = nom;
	this->rarete = rarete;
	this->prix = prix;
	this->puissance = 0;
}

Arme::Arme(string nom, string rarete, int prix, int puissance) : Equipement(nom, rarete, prix) {
	this->nom = nom;
	this->rarete = rarete;
	this->prix = prix;
	this->puissance = puissance;
}

Arme::~Arme() {}

string Arme::exporter() {
	stringstream xml;
	xml << "<Arme><nom>" << this->nom << "</nom><rarete>"<< this->rarete << "</rarete><prix>" << this->prix << "</prix><puissance>" << this->puissance << "</puissance></Arme>";
	return xml.str();
}

} /* namespace DonjonEtDragons */
