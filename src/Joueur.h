/*
 * Joueur.h
 *
 *  Created on: 26 sept. 2018
 *      Author: Vincent
 */

#ifndef JOUEUR_H_
#define JOUEUR_H_
#include <iostream>
#include "Equipement.h"
#include <vector>
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;

namespace DonjonEtDragons {

class Joueur {
public:
	Joueur();
	Joueur(string nom);
	Joueur(string nom, int armure);
	bool operator>(Joueur& autreJoueur);
	bool operator<(Joueur& autreJoueur);

	virtual ~Joueur();

	virtual string exporter();

	int getArmure() const {
		return armure;
	}

	void setArmure(int armure) {
		this->armure = armure;
	}

	const string& getNom() const {
		return nom;
	}

	void setNom(const string& nom) {
		this->nom = nom;
	}

	const Equipement* getArme() const{
		return arme;
	}

	void setArme(Equipement* arme){
		this->arme = arme;
	}

	void ajouterEquipement(Equipement * nouvelEquipement);

	void afficher(RenderWindow&);

	void blesser();

protected:
	string nom;
	int armure;
	Equipement * arme = NULL;
	vector<Equipement *> equipements;
	sf::Texture * texture;
	sf::Sprite * image;
};

} /* namespace DonjonEtDragons */

#endif /* JOUEUR_H_ */
