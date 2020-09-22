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
	
	int jourkm; //FR : Nombre de KM utiliser par jour
	int gratuiskm = -250;   // Le nombre de km gratuis par jour
	
	// KM : Tu ne peux pas mettre une valeur décimale dans un entier
	int km = 0.05;       // le cout de chaque km si l'utilisateur dépasse le 250km offert
	
	// KM : Même chose ici, tu vas perdre la virgule. Il faut un float
	int essence = 7.6 / 100;  //consommation d'essence du véhicule
	//  prixessence = 1.25; //prix de l'essence  ((Je le met en commentaire parce que je ne pense pas l'utiliser comme variable, mais je préfère le précisé quand même.
	
	//On demande a l'utilisateur le nombre de jour qu'il veut avoir le véhicule, le nombre de km par jours

	std::cout << "Veuillez entrer le nombre de jours de location désiré : ";
	std::cin >> jourut;
	//On demande combien de KM il veut parcourir chaques jours

	std::cout << "Veuillez entrer le nombre de km à parcourir par jour : ";
	std::cin >> jourkm;



	//FR : Le programme va éxécuter plusieurs calcul, dont la consommation d'essence, le cout des km, cout des jours, etc.

	std::cout << "Le coût de la location du véhicule sera de " << (jourut * jourargent) << " $."<< std::endl;   //Celui là marche.
	
	
	/*
	
	std::cout << (jourkm - gratuiskm) * 0.05;     //Bon , ça marche pas. Ça me donne un nombre qui ne fait pas de sens, alors je vais passer a
																												// l'autre et garder celui là en commentaire pour pas faire bugger le programme
	// KM : C'est à cause du int à la place du float																											*/


	//On va essayer le cout de l'essence

	//std::cout << (jourkm * essence) * 1.25;   FR : Bon, apparament je ne sais pas comment faire des priorités d'opération ou dumoin des opération a plus d'un calcul alors je vais attendre en classe.



	/*
	Plan de test

	Jours                Résulats
	8                       360
	4						180
	2						90
	
	*/


	return 0;
}

/*
•	La solution est bien nommée et comporte un projet 5/ 5
•	Les fichiers sources contiennent l'identification complète du programme et de son auteur	5/5
•	Le code source est sans erreur de compilation 8/ 15		// Beaucoup de code en commentaire
•	Le programme est fonctionnel 5/ 20
•	Le programme passe le plan de tests 8/ 20
•	Le code source est largement commenté 20 / 20		// KM : C'est parfati que tu aies laissé une trace de ton raisonnement
•	La solution est déposée dans LEA et dans GitHub.L'adresse est envoyée via Outlook	10/15
Dans LEA, il y a seulement le fichier .sln



Note 53/100
Dommage que tu ne m'as pas demandé de l'aide car juste à cause du int à la place d'un float et tu aurais pu améliorer le fonctionnement du programme.
Ne te décourage pas, tu avais le raisonnement.
*/
