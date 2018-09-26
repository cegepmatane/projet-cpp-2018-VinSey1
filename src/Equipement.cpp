/*
 * Equipement.cpp
 *
 *  Created on: 26 sept. 2018
 *      Author: Vincent
 */

#include "Equipement.h"
#include <sstream>

namespace DonjonEtDragons {

Equipement::Equipement() {
	this->nom = "Inconnu";
	this->rarete = "Inconnue";
	this->prix = 0;
}

Equipement::Equipement(string nom) {
	this->nom = nom;
	this->rarete = "Inconnue";
	this->prix = 0;
}

Equipement::Equipement(string nom, string rarete) {
	this->nom = nom;
	this->rarete = rarete;
	this->prix = 0;
}

Equipement::Equipement(string nom, string rarete, int prix){
	this->nom = nom;
	this->rarete = rarete;
	this->prix = prix;
}

Equipement::~Equipement() {}

string Equipement::exporter() {
	stringstream xml;
	xml << "<Equipement><nom>" << this->nom << "</nom><rarete>"<< this->rarete << "</rarete><prix>" << this->prix << "</prix></Equipement>";
	return xml.str();
}

} /* namespace DonjonEtDragons */
