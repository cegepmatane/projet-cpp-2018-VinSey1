//============================================================================
// Name        : DonjonEtDragons.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <fstream>
#include <iostream>

#include "Joueur.h"
#include "Archer.h"
#include "Voleur.h"
#include "Guerrier.h"

#include "Equipement.h"
#include "Arme.h"
#include "Bouclier.h"
#include "Pieds.h"


using namespace std;
using namespace DonjonEtDragons;

int main() {
	/*
	ofstream fichierDonjon;
	fichierDonjon.open("data/donjon.xml");

	Joueur* joueur;
	joueur = new Guerrier("Guerrier", 50, 100);
	fichierDonjon << "<donjon>" << joueur->exporter() << "</donjon>";

	joueur = new Archer("Archer", 50, 100);
	fichierDonjon << "<donjon>" << joueur->exporter() << "</donjon>";

	joueur = new Voleur("Voleur", 50, 100);
	fichierDonjon << "<donjon>" << joueur->exporter() << "</donjon>";

	Equipement* equipement;
	equipement = new Pieds("Pieds", "Rare", 100, 50);
	fichierDonjon << "<donjon>" << equipement->exporter() << "</donjon>";

	equipement = new Arme("Epee", "Rare", 100, 50);
	fichierDonjon << "<donjon>" << equipement->exporter() << "</donjon>";

	equipement = new Bouclier("Bouclier", "Rare", 100, 50);
	fichierDonjon << "<donjon>" << equipement->exporter() << "</donjon>";

	ifstream fichierJoueurs;
	fichierJoueurs.open("data/Joueurs.csv");

	string ligne;
	unsigned int dernierePosition = 0;
	unsigned int positionPointVirgule = 0;
	while(!fichierJoueurs.eof()){
		getline(fichierJoueurs, ligne);
		cout << "Ligne : " << ligne << endl;

		dernierePosition = 0;
		do {
			positionPointVirgule = ligne.find(";", dernierePosition);
			string valeur = ligne.substr(dernierePosition, positionPointVirgule - dernierePosition);
			cout << " valeur : " << valeur;
			dernierePosition = positionPointVirgule+1;
		}
		while(0 != dernierePosition);
		cout << endl;
	}
	*/

	//Test de l'op�rateur

	Joueur joueurA("joueurA", 100), joueurB("joueurB", 110);

	bool estAInferieur = joueurA.getArmure() < joueurB.getArmure();

	cout << "Le joueur A est " << ((estAInferieur)?"inf�rieur":"sup�rieur") << " au Joueur B" << endl;

	bool estBSuperieur = joueurB.getArmure() > joueurA.getArmure();

	cout << "Le joueur B est " << ((estBSuperieur)?"sup�rieur":"inf�rieur") << " au Joueur A" << endl;
/*
	Joueur* listeJoueurs[5];
	listeJoueurs[0] = new Guerrier("Eliott", 110);
	listeJoueurs[1] = new Guerrier("Vincent", 110);
	listeJoueurs[2] = new Guerrier("Youssef", 0);
	listeJoueurs[3] = new Guerrier("Valentin", 110);
	listeJoueurs[4] = new Guerrier("Val�re", 110);

	Joueur* joueur;
	char lettre;

	while(true){
		cout << "<monde>" << endl;
		for(int position = 0; position < 5; position++){
			joueur = listeJoueurs[position];
			cout << joueur->exporter() << endl;
		}
		cout <<"</monde>";
		cout << endl;
	}
*/
	return 0;
}
