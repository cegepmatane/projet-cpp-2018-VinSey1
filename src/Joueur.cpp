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

	this->texture = new sf::Texture();
	this->texture->loadFromFile("data/illustrations/joueur.png");
	this->image = new sf::Sprite(*texture);
	this->image->setScale(sf::Vector2f(0.5f, 0.5f));
}

Joueur::Joueur(string nom) {
	this->armure = 0;
	this->nom = nom;

	this->texture = new sf::Texture();
	this->texture->loadFromFile("data/illustrations/joueur.png");
	this->image = new sf::Sprite(*texture);
	this->image->setScale(sf::Vector2f(0.5f, 0.5f));
}

Joueur::Joueur(string nom, int armure) {
	this->armure = armure;
	this->nom = nom;

	this->texture = new sf::Texture();
	this->texture->loadFromFile("data/illustrations/joueur.png");
	this->image = new sf::Sprite(*texture);
	this->image->setScale(sf::Vector2f(0.5f, 0.5f));
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
	fenetre.draw(*image);
}

void Joueur::blesser(){
	image->setColor(sf::Color(255, 0, 0));
}

} /* namespace DonjonEtDragons */
