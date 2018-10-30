/*
 * Guerrier.cpp
 *
 *  Created on: 26 sept. 2018
 *      Author: Vincent
 */

#include "Guerrier.h"
#include "Arme.h"
#include <sstream>

namespace DonjonEtDragons {

Guerrier::Guerrier() : Joueur() {
	this->fureur = 0;
	this->arme = new Arme("Epee", 100);
}

Guerrier::Guerrier(string nom) : Joueur(nom) {
	this->nom = nom;
	this->fureur = 0;
	this->arme = new Arme("Epee", 100);
}

Guerrier::Guerrier(string nom, int fureur) : Joueur(nom) {
	this->nom = nom;
	this->fureur = fureur;
	this->arme = new Arme("Epee", 100);
}

Guerrier::Guerrier(string nom, int armure, int fureur) : Joueur(nom, armure) {
	this->nom = nom;
	this->armure = armure;
	this->fureur = fureur;
	this->arme = new Arme("Epee", 100);
}

Guerrier::~Guerrier() {
	delete this->arme;
}

string Guerrier::exporter() {
	stringstream xml;
	xml << "<Guerrier><nom>" << this->nom << "</nom><armure>"<< this->armure << "</armure><fureur>" << this->fureur << "</fureur></Guerrier>";
	return xml.str();
}

void Guerrier::afficher(RenderWindow* fenetre){

	cout << "Affichage de " << this->nom << endl;
	sf::Texture texture;
	texture.loadFromFile("data/illustrations/guerrier.png");
	sf::Sprite image(texture);

	image.setScale(sf::Vector2f(0.5f, 0.5f));

	fenetre->draw(image);
}

} /* namespace DonjonEtDragons */
