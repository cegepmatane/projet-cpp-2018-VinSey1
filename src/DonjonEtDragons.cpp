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

	ofstream fichierDonjon;
	fichierDonjon.open("data/donjon.xml");

	/*
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

	//Test de l'opérateur Joueur

	Joueur joueurA("joueurA", 100), joueurB("joueurB", 110);

	bool estJoueurAInferieur = joueurA.getArmure() < joueurB.getArmure();

	cout << "Le joueur A est " << ((estJoueurAInferieur)?"inférieur":"supérieur") << " au Joueur B" << endl;

	bool estJoueurBInferieur = joueurB.getArmure() > joueurA.getArmure();

	cout << "Le joueur B est " << ((estJoueurBInferieur)?"supérieur":"inférieur") << " au Joueur A" << endl;

	//Test de l'opérateur Équipement

	Equipement equipementA("equipementA", "Commun", 100), equipementB("equipementB", "Commun", 110);

	bool estEquipementAMoinsCher = equipementA.getPrix() < equipementB.getPrix();

	cout << "L'équipement A est " << ((estEquipementAMoinsCher)?"moins cher":"plus cher") << " que l'équipement B" << endl;

	bool estEquipementBPlusCher = equipementB.getPrix() > equipementA.getPrix();

	cout << "L'équipement B est " << ((estEquipementBPlusCher)?"plus cher":"moins cher") << " que l'équipement A" << endl;
	*/

	Joueur* listeJoueurs[5];
	listeJoueurs[0] = new Guerrier("Eliott", 110);
	listeJoueurs[1] = new Guerrier("Vincent", 110);
	listeJoueurs[2] = new Guerrier("Youssef", 0);
	listeJoueurs[3] = new Guerrier("Valentin", 110);
	listeJoueurs[4] = new Guerrier("Michael", 110);

	Joueur* joueur;

	char lettre;

	bool jeu = true;

	while(jeu){
		cout << "<monde>" << endl;
		for(int position = 0; position < 5; position++){
			joueur = listeJoueurs[position];
			cout << joueur->exporter() << endl;
		}
		cout <<"</monde>";
		cout << endl;
		if (cin.rdbuf() && cin.rdbuf()->in_avail() >= 0)
		{
			lettre = cin.get();
			cin.ignore();
			cout << "Vous pressez la touche " << lettre << endl;
			switch(lettre){
				case 'q':
					jeu = false;
					cout << "Vous quittez le jeu, sauvegarde en cours" << endl;
					fichierDonjon << "<donjon>";
					for(Joueur* joueur : listeJoueurs){
						fichierDonjon << joueur->exporter();
					}
					fichierDonjon << "</donjon>";
					break;
				case 'a':
					cout << "Quel personnage voulez-vous modifier ? ";
					int numero;
					cin >> numero;
					cout << "Vous allez modifier le personnage " << numero << " : " << listeJoueurs[numero]->getNom() << endl;
					cout << "Que voulez-vous modifier ? ";
					string modification;

					cin >> modification;
					if(modification == "nom"){
						cout << "Nouveau nom : ";
						string nom;
						cin >> nom;
						cout << listeJoueurs[numero]->getNom() << " s'appelle maintenant " << nom;
						listeJoueurs[numero]->setNom(nom);
					} else if (modification == "armure"){
						cout << "Nouvelle valeur d'armure : ";
						int valeur;
						cin >> valeur;
						cout << listeJoueurs[numero]->getNom() << " est passé de  " << listeJoueurs[numero]->getArmure()
								<< " à " << valeur << " d'armure";
						listeJoueurs[numero]->setArmure(valeur);
					} else {
						cout << "Erreur";
					}
					cout << endl;
			}
		}
	}
	cout << "Fin du jeu" << endl;

	return 0;
}
