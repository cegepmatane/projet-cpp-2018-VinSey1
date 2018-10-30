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
	this->finesse = 0;
	this->arme = new Arme("Dague", 50);
}

Voleur::Voleur(string nom) : Joueur(nom) {
	this->nom = nom;
	this->finesse = 0;
	this->arme = new Arme("Dague", 50);
}

Voleur::Voleur(string nom, int finesse) : Joueur(nom) {
	this->nom = nom;
	this->finesse = finesse;
	this->arme = new Arme("Dague", 50);
}

Voleur::Voleur(string nom, int armure, int finesse) : Joueur(nom, armure) {
	this->nom = nom;
	this->armure = armure;
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

void Voleur::afficher(RenderWindow* fenetre){

	sf::Texture texture;
	texture.loadFromFile("data/illustrations/voleur.png");
	sf::Sprite image(texture);

	image.setScale(sf::Vector2f(0.5f, 0.5f));

	fenetre->draw(image);
}

} /* namespace DonjonEtDragons */
