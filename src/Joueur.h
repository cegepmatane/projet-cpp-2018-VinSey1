/*
 * Joueur.h
 *
 *  Created on: 26 sept. 2018
 *      Author: Vincent
 */

#ifndef JOUEUR_H_
#define JOUEUR_H_
#include <iostream>
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

protected:
	string nom;
	int armure;
};

} /* namespace DonjonEtDragons */

#endif /* JOUEUR_H_ */
