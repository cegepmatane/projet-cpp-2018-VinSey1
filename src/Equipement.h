/*
 * Equipement.h
 *
 *  Created on: 26 sept. 2018
 *      Author: Vincent
 */

#ifndef EQUIPEMENT_H_
#define EQUIPEMENT_H_
#include <iostream>
using namespace std;

namespace DonjonEtDragons {

class Equipement {
public:
	Equipement();
	Equipement(string nom);
	Equipement(string nom, string rarete);
	Equipement(string nom, string rarete, int prix);
	bool operator>(Equipement& autreEquipement);
	bool operator<(Equipement& autreEquipement);

	virtual ~Equipement();

	virtual string exporter();

	const string& getNom() const {
		return nom;
	}

	void setNom(const string& nom) {
		this->nom = nom;
	}

	int getPrix() const {
		return prix;
	}

	void setPrix(int prix) {
		this->prix = prix;
	}

	const string& getRarete() const {
		return rarete;
	}

	void setRarete(const string& rarete) {
		this->rarete = rarete;
	}

protected:
	string nom;
	string rarete;
	int prix;
};

} /* namespace DonjonEtDragons */

#endif /* EQUIPEMENT_H_ */
