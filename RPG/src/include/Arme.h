#ifndef DEF_ARME
#define DEF_ARME
#include <string>
#include <iostream>

class Arme
{
public :
		Arme(); 
		Arme(std::string nom, int degats); 
		void changer(std::string nom , int degats); 
		void afficher() const; // no change for this method just print 
		int getDegats() const; //getter
	

private : 
		std::string m_nom; 
		int m_degats; 
			
}; 


#endif
