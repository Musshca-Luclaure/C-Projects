#ifndef DEF_GARRAGE
#define DEF_GARRAGE

// include 
#include <string>

class Vehicule{
	
	public: 
	   Vehicule(int prix); 
	   virtual ~Vehicule();
	   virtual	void affiche() const; 
	   virtual int nbreRoue() const = 0;  // methode virtual pure
	
		
	protected: 
		int m_prix; 
}; 


class Voiture: public Vehicule
{
	public: 
		Voiture(int prix, int porte); 
		void affiche() const; 
		virtual ~Voiture(); 
		virtual int nbreRoue() const; 
		
	private: 
		int m_portes; 
}; 


class Moto: public Vehicule
{
	public: 
		Moto(int prix, int vitesse); 
		void affiche() const; 
     	virtual ~Moto(); 
     	virtual int nbreRoue() const; 

		
	private: 
		int m_vitesse; 
}; 






#endif
