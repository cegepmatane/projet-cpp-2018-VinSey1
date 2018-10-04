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
using namespace std;

namespace DonjonEtDragons {

class Joueur {
public:
	Joueur();
	Joueur(string nom);
	Joueur(string nom, int armure);

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

protected:
	string nom;
	int armure;
	Equipement * arme;
	vector<Equipement *> equipements;
};

} /* namespace DonjonEtDragons */

#endif /* JOUEUR_H_ */
