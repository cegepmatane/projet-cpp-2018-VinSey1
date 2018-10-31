/*
 * Joueur.cpp
 *
 *  Created on: 26 sept. 2018
 *      Author: Vincent
 */

#include "Joueur.h"
#include <sstream>

namespace DonjonEtDragons {

Joueur::Joueur() {
	this->armure = 0;
	this->nom = "Inconnu";
/*
	this->nomTest = new sf::Text();
	this->nomTest->setString(this->nom);*/

	this->texturePersonnage = new sf::Texture();
	this->texturePersonnage->loadFromFile("data/illustrations/joueur.png");
	this->imagePersonnage = new sf::Sprite(*texturePersonnage);
	this->imagePersonnage->setScale(sf::Vector2f(0.5f, 0.5f));

	this->textureProtection = new sf::Texture();
	this->textureProtection->loadFromFile("data/illustrations/protection.png");
	this->imageProtection = new sf::Sprite(*textureProtection);
	this->imageProtection->setScale(sf::Vector2f(0.5f, 0.5f));
}

Joueur::Joueur(string nom) {
	this->armure = 0;
	this->nom = nom;
/*
	this->nomTest = new sf::Text();
	this->nomTest->setString(this->nom);*/

	this->texturePersonnage = new sf::Texture();
	this->texturePersonnage->loadFromFile("data/illustrations/joueur.png");
	this->imagePersonnage = new sf::Sprite(*texturePersonnage);
	this->imagePersonnage->setScale(sf::Vector2f(0.5f, 0.5f));

	this->textureProtection = new sf::Texture();
	this->textureProtection->loadFromFile("data/illustrations/protection.png");
	this->imageProtection = new sf::Sprite(*textureProtection);
	this->imageProtection->setScale(sf::Vector2f(0.5f, 0.5f));
}

Joueur::Joueur(string nom, int armure) {
	this->armure = armure;
	this->nom = nom;
/*
	this->nomTest = new sf::Text();
	this->nomTest->setString(this->nom);*/

	this->texturePersonnage = new sf::Texture();
	this->texturePersonnage->loadFromFile("data/illustrations/joueur.png");
	this->imagePersonnage = new sf::Sprite(*texturePersonnage);
	this->imagePersonnage->setScale(sf::Vector2f(0.5f, 0.5f));

	this->textureProtection = new sf::Texture();
	this->textureProtection->loadFromFile("data/illustrations/protection.png");
	this->imageProtection = new sf::Sprite(*textureProtection);
	this->imageProtection->setScale(sf::Vector2f(0.5f, 0.5f));
}

Joueur::~Joueur() {}

string Joueur::exporter() {
	stringstream xml;
	xml << "<Joueur><nom>" << this->nom << "</nom><armure>"<< this->armure << "</armure></Joueur>";
	return xml.str();
}

void Joueur::ajouterEquipement(Equipement* nouvelEquipement){
	this->equipements.push_back(nouvelEquipement);
}

bool Joueur::operator>(Joueur& autreJoueur){
	if(this->armure < autreJoueur.armure) return false;
	return true;
}

bool Joueur::operator<(Joueur& autreJoueur){
	if(this->armure < autreJoueur.armure) return true;
	return false;
}

void Joueur::afficher(RenderWindow& fenetre){
	/*fenetre.draw(*nomTest);*/
	fenetre.draw(*imagePersonnage);
}

void Joueur::proteger(RenderWindow& fenetre){
	fenetre.draw(*imageProtection);
}

void Joueur::deplacer(float deplacementX, float deplacementY){
	this->imagePersonnage->move(deplacementX, deplacementY);
	this->imageProtection->move(deplacementX, deplacementY);
}

} /* namespace DonjonEtDragons */
