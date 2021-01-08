#include <iostream>
#include <string>
#include <vector>
#include "Garrage.h"

using namespace std; 

void sePresenter(Vehicule const& v )
{
	v.affiche();
}

int main(void)
{ 
	
	vector < Vehicule* > listeVehicules; 
	listeVehicules.push_back(new Voiture(1500, 3)); 
	listeVehicules.push_back(new Voiture(500, 3)); 
	listeVehicules.push_back(new Moto(300, 100)); 
	
	listeVehicules[0]->affiche();
	listeVehicules[1]->affiche();
	listeVehicules[2]->affiche();
	
	
	//or (int i(0); i < sizeof(listeVehicules); i++){
		delete listeVehicules[0]; 
		//listeVehicules[i] = 0;
	//}
	
	
	return 0; 
}

