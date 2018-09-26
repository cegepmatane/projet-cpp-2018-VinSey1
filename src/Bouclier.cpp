/*
 * Bouclier.cpp
 *
 *  Created on: 26 sept. 2018
 *      Author: Vincent
 */

#include "Bouclier.h"
#include <sstream>

namespace DonjonEtDragons {

Bouclier::Bouclier() : Equipement() {
	this->blocage = 0;
}

Bouclier::Bouclier(string nom) : Equipement(nom) {
	this->nom = nom;
	this->blocage = 0;
}

Bouclier::Bouclier(string nom, int bonusFuite) : Equipement(nom) {
	this->nom = nom;
	this->blocage = bonusFuite;
}

Bouclier::Bouclier(string nom, string rarete) : Equipement(nom, rarete) {
	this->nom = nom;
	this->rarete = rarete;
	this->blocage = 0;
}

Bouclier::Bouclier(string nom, string rarete, int prix) : Equipement(nom, rarete, prix) {
	this->nom = nom;
	this->rarete = rarete;
	this->prix = prix;
	this->blocage = 0;
}

Bouclier::Bouclier(string nom, string rarete, int prix, int blocage) : Equipement(nom, rarete, prix) {
	this->nom = nom;
	this->rarete = rarete;
	this->prix = prix;
	this->blocage = blocage;
}

Bouclier::~Bouclier() {}

string Bouclier::exporter() {
	stringstream xml;
	xml << "<Bouclier><nom>" << this->nom << "</nom><rarete>"<< this->rarete << "</rarete><prix>" << this->prix << "</prix><blocage>" << this->blocage << "</blocage></Bouclier>";
	return xml.str();}

} /* namespace DonjonEtDragons */
