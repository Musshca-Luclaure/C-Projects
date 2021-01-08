#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

// include 
#include "Arme.h"
#include <string>


class Personnage
{
public : 
		Personnage(); // default 
	   ~Personnage();
		Personnage(Personnage const& personnageCopier); // overwhalmed 
	    Personnage& operator=(Personnage const& personnageCopier); 
	    Personnage(std::string nom, int degats); 
	    
		void sePresenter() const; 
		void recevoirDegats(int degats); 
		void attaquer(Personnage &adversaire); // why address? 
		void boirePotionDeVie(int potion); 
		void changerArme (std::string nomNouvelleArme, int nouveauDegats); 
		bool estVivant (); 
		
		
		
	

protected : 
		int m_vie; 
		int m_mana; 
		Arme *m_arme; //Arme m_arme; 
}; 


#endif 
