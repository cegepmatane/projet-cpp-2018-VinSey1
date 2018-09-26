/*
 * Equipement.cpp
 *
 *  Created on: 26 sept. 2018
 *      Author: Vincent
 */

#include "Equipement.h"

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
	return "<Equipement><nom></nom><rarete></rarete><prix></prix></Equipement>";
}

} /* namespace DonjonEtDragons */
