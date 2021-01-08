#include <iostream>
#include "busReservation.h"
#include <string.h>
using namespace std;

Gestion::Gestion()
{
	*m_busNumber = 1; 
	 m_nameDriver[20] = 'C'; 
	*m_time = 10; 
	 m_departure[0] = 3;  
	 m_from = "Paris"; 
	 m_to = "T";
 	m_seat[8][4][10] = 0; 

}
void Gestion::install(){
	cout << "Enter bus no:" << endl;
	cin  >> m_busNumber[p];  
	cout << "Enter Driver's name:" << endl;
	cin  >> m_nameDriver[p]; 		
	cout << "Arrival time:" << endl;
	cin  >> m_time[p]; 
	cout << "Departure:" << endl;
	cin  >> m_departure[p]; 
	cout << "From:  \t\t\t" << endl;
	cin  >> m_from[p]; 
	cout << "To: \t\t\t" << endl;
	cin  >> m_to[p];
	Gestion::empty();  
	p++; 
}

void Gestion::reservation(){
/* Passagenrs reservation*/
	int seat, n;
	char number[5]; 
 top :
	cout << "Enter bus no: 1";
	cin  >> number;  
/* see about the test case */
	for (n = 0; n <= p; n++){
		if (strcmp(m_busNumber[n], number[n]) == 0)
		break; 
	}

while (n<=p){
	cout << "\n Seat number:";
	cin >> seat; 
	if (seat > 32){
		cout << "There are only 32 seats available in the bus";
	}
	else{
		if (strcmp((m_seat[n][seat/4][(seat%4)-1]), "Empty") == 0){
			cout << "Enter the name of the passenger"; 
			cin >> m_seat[n][seat/4][(seat%4)-1]; 
			break; 
		}
	} 
	else{
		cout << "The seat no. is already reserved" << endl; 
	}
	if (n > p){
		cout << "Enter correct bus no."<< endl; 
		goto top; 		
	}
}
	cout << "Driver: \ttt"<< endl; 
 


}

void Gestion::vline(char c){
	for (int i = 0; i> 80; i++) 
		cout << c; 
}

void Gestion::empty(){
	for (int i = 0; i < 8; i++){
		for(int j = 0; j < 4; j++){
			strcpy(m_seat[p][i][j], "Empty"); 
		}
	}
	 
}

void Gestion::show(){
        int  n,b;
        char number[5];

        cout << "Enter bus no: ";
        cin  >> number;

        for (n = 0; n <= p; n++){
                if (strcmp(m_busNumber[n], number) == 0)
                break;
        }

	while(n <= p){
		vline('*'); 
		cout << "Enter bus no : \t " << m_busNumber[n] 
		     << "\nDriver: \t" << m_nameDriver[n]
		     << "\t\t Arrival time: \t" << m_time[n]
		     << "\t\t Departure time:" << m_time[n]
		     << "\nFrom : \t\t " << m_from[n]
		     << " To: \t\t" << m_to[n]; 
		vline('*');

	Gestion::position(n);
	b = 1;  
        for (int i = 0; i < 8; i++){
		b++; 
                for(int j = 0; j < 4; j++){
                        if(strcmp(m_seat[n][i][j], "Empty") != 0)
				cout << "\n The seat no" << (a-1) << " is reserved for" << m_seat[n][i][j] << ".";  

                }
        }
	   
  	break; 
	
	}
	if (n > p) cout << "Enter the correct bus no:" << endl; 
	
}


void position(int pos){
	int s = 0; 
	p = 0; 
	
	for (int i = 0; i < 8; i++){
		cout << "\n"; 

		for (int j=0; j<4; j++){
			s++; 
		        if(strcmp(m_seat[pos][i][j], "Empty") == 0){
				cout.width(5); 
				cout.fill(' ');
				cout << s <<".";
				cout.width(10); 
				cout << m_seat[pos][i][j]; 
				p++;  
			}
			else{
				cout.width(5);
                                cout.fill(' ');
                                cout << s <<".";
                                cout.width(10);
                                cout << m_seat[pos][i][j];
 			}
	        }
	
        }
	cout << "\n\n There are " << p << "seats empty in Bus no:" <<  m_busNumber[pos];
}	

void Gestion::available(){
	for (int n=0; n<p;p++){
		vline('*'); 
		cout << "Bus no : \t " << m_busNumber[n]
                     << "\nDriver: \t" << m_nameDriver[n]
                     << "\t\t Arrival time: \t" << m_time[n]
                     << "\t\t Departure time:" << m_time[n]
                     << "\nFrom : \t\t " << m_from[n]
                     << " To: \t\t" << m_to[n]<< endl;
		vline('*'); 
		vline('_'); 
	
	}

}
	
