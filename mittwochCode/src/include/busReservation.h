#ifndef DEF_GARRAGE
#define DEF_GARRAGE


#include <string>
#include <iostream>
#include <cstdio>
#include <cstdlib>
//#include <conio>


using namespace std;

class Gestion {
	 public:
		int p = 0; // bus number entree manually
		Gestion();   
		void install(); 
  		void reservation();
		void vline(char c); // to have a nice output 
  	        void empty(); 
		void show(); 
  		void position(int pos);
         	void available();

	

  	private:
		char *m_busNumber, *m_nameDriver, *m_time, *m_departure,
		      m_seat[8][4][10];
		string m_from, m_to; 
   	

}; 

#endif

