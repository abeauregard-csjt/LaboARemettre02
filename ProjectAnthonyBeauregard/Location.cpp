//But : �crire un programme pour calculer le montant qu�un individu devra d�bourser pour faire un voyage dans une
//automobile lou�e.L�algorithme tient compte du kilom�trage parcouru et de la dur�e du voyage qui sont
//soumises par le requ�rant.

//Auteur: Anthony Beauregard
//Date:14/09/2020
#include <iostream>
int main() {





	setlocale(LC_ALL, "");
		//D�claration des variables
	
	int jourut;    //Le nombre de jour que l'utilisateur compte avoir le v�hicule
	int jourargent = 45; //Le cout du v�hicule par jour
	
	int jourkm; //Nombre de KM utiliser par jour
	int gratuiskm = -250;   // Le nombre de km gratuis par jour
	int km = 0.05;       // le cout de chaque km si l'utilisateur d�passe le 250km offert
	
	int essence = 7.6 / 100;  //consommation d'essence du v�hicule
	//  prixessence = 1.25; //prix de l'essence  ((Je le met en commentaire parce que je ne pense pas l'utiliser comme variable, mais je pr�f�re le pr�cis� quand m�me.
	
	//On demande a l'utilisateur le nombre de jour qu'il veut avoir le v�hicule, le nombre de km par jours

	std::cout << "Veuillez entrer le nombre de jours de location d�sir� : ";
	std::cin >> jourut;
	//On demande combien de KM il veut parcourir chaques jours

	std::cout << "Veuillez entrer le nombre de km � parcourir par jour : ";
	std::cin >> jourkm;



	//Le programme va �x�cuter plusieurs calcul, dont la consommation d'essence, le cout des km, cout des jours, etc.

	std::cout << "Le co�t de la location du v�hicule sera de " << (jourut * jourargent) << " $."<< std::endl;   //Celui l� marche.
	
	
	/*
	
	std::cout << (jourkm - gratuiskm) * 0.05;     //Bon , �a marche pas. �a me donne un nombre qui ne fait pas de sens, alors je vais passer a
																												// l'autre et garder celui l� en commentaire pour pas faire bugger le programme
																												*/


	//On va essayer le cout de l'essence

	//std::cout << (jourkm * essence) * 1.25;   Bon, apparament je ne sais pas comment faire des priorit�s d'op�ration ou dumoin des op�ration a plus d'un calcul alors je vais attendre en classe.



	/*
	Plan de test

	Jours                R�sulats
	8                       360
	4						180
	2						90
	
	
	
	
	
	
	*/








	return 0;
}
