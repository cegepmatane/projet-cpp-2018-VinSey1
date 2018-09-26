/*
 * Guerrier.cpp
 *
 *  Created on: 26 sept. 2018
 *      Author: Vincent
 */

#include "Guerrier.h"

namespace DonjonEtDragons {

Guerrier::Guerrier() : Joueur() {
	this->fureur = 0;
}

Guerrier::Guerrier(string nom) : Joueur(nom) {
	this->nom = nom;
	this->fureur = 0;
}

Guerrier::Guerrier(string nom, int fureur) : Joueur(nom) {
	this->nom = nom;
	this->fureur = fureur;
}

Guerrier::Guerrier(string nom, int armure, int fureur) : Joueur(nom, armure) {
	this->nom = nom;
	this->armure = armure;
	this->fureur = fureur;
}

Guerrier::~Guerrier() {}

string Guerrier::exporter() {
	return "<Guerrier><nom></nom><armure></armure><fureur></fureur></Guerrier>";
}

} /* namespace DonjonEtDragons */
