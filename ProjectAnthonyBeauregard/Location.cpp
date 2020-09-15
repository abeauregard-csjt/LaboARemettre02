//But : Écrire un programme pour calculer le montant qu’un individu devra débourser pour faire un voyage dans une
//automobile louée.L’algorithme tient compte du kilométrage parcouru et de la durée du voyage qui sont
//soumises par le requérant.

//Auteur: Anthony Beauregard
//Date:14/09/2020
#include <iostream>
int main() {





	setlocale(LC_ALL, "");
		//Déclaration des variables
	
	int jourut;    //Le nombre de jour que l'utilisateur compte avoir le véhicule
	int jourargent = 45; //Le cout du véhicule par jour
	
	int jourkm; //Nombre de KM utiliser par jour
	int gratuiskm = -250;   // Le nombre de km gratuis par jour
	int km = 0.05;       // le cout de chaque km si l'utilisateur dépasse le 250km offert
	
	int essence = 7.6 / 100;  //consommation d'essence du véhicule
	//  prixessence = 1.25; //prix de l'essence  ((Je le met en commentaire parce que je ne pense pas l'utiliser comme variable, mais je préfère le précisé quand même.
	
	//On demande a l'utilisateur le nombre de jour qu'il veut avoir le véhicule, le nombre de km par jours

	std::cout << "Veuillez entrer le nombre de jours de location désiré : ";
	std::cin >> jourut;
	//On demande combien de KM il veut parcourir chaques jours

	std::cout << "Veuillez entrer le nombre de km à parcourir par jour : ";
	std::cin >> jourkm;



	//Le programme va éxécuter plusieurs calcul, dont la consommation d'essence, le cout des km, cout des jours, etc.

	std::cout << "Le coût de la location du véhicule sera de " << (jourut * jourargent) << " $."<< std::endl;   //Celui là marche.
	
	
	/*
	
	std::cout << (jourkm - gratuiskm) * 0.05;     //Bon , ça marche pas. Ça me donne un nombre qui ne fait pas de sens, alors je vais passer a
																												// l'autre et garder celui là en commentaire pour pas faire bugger le programme
																												*/


	//On va essayer le cout de l'essence

	//std::cout << (jourkm * essence) * 1.25;   Bon, apparament je ne sais pas comment faire des priorités d'opération ou dumoin des opération a plus d'un calcul alors je vais attendre en classe.



	/*
	Plan de test

	Jours                Résulats
	8                       360
	4						180
	2						90
	
	
	
	
	
	
	*/








	return 0;
}
