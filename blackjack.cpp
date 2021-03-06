#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>
using namespace std;
 
   //Variables globales
int numj, barajas[3][13], v;
float moni[4], monir;
string nom[4];
float ap[4];
 
   //Declaracion de funciones
void menu ();
void nombres ();
void disenio ();
void apuesta ();
void cartas ();
int repcartas();
 
int main (){
  //Llamada de funciones
  disenio ();
  menu ();
  disenio();
  nombres ();
  disenio();
  apuesta ();
  cartas();
  repcartas();
 
 
}				//Main
 
 
//************
void menu (){//Captura de numero de jugadores
  do{
      cout << "        Cuantos jugadores desean ingresar a la sala--> ";
      cin >> numj;
      cout << endl;
 
      if (numj > 4){
	  cout << "Error Maximo 4 jugadores" << endl;
	}
      else if (numj < 1){
	  cout << "Error Elige de 1 a 4 jugadores" << endl;
	}
 
      system ("Pause");
      system ("cls");
    } while (numj < 1 || numj > 4);
 
}				//menu()
 
 
//***********
void nombres (){	//Se capturan los nombres y el dinero con el que van a ingresar
 
  for (int i = 0; i < numj; i++)
    {
      cout << "Ingresa el nombre del jugador " << i + 1 << " --> ";
      cin >> nom[i];
      cout << "Cuanto dinero desea ingresar a la mesa el jugador " << i +
	1 << " --> ";
      cin >> moni[i];
      cout << endl;
    }
	system("cls");
 
}				// nombres()
 
//************
 
void disenio (){				//El "diseño" del juego
  cout <<"==========================================================================="<< endl;
  cout <<"=                               21 BLACK JACK                             ="<< endl;
  cout <<"=                                Bienvenido                               ="<< endl;
  cout <<"==========================================================================="<< endl;
 
}				//Diseño
 
//************
 
void apuesta (){
	  cout<< "***************************************"<< endl;
  for (int i = 0; i < numj; i++){
      cout << "Cuantos creditos apuestas " << nom[i] << " --> ";
      cin >> ap[i];
      monir=moni[i]-ap[i];
      cout<< "Te quedan " << monir<< " creditos"<< endl;
      cout<< "***************************************"<< endl;
    }
    system("Pause");
    system("cls");
 
    cout<< "============Apuestas=========="<< endl;
    for(int i=0; i<numj; i++){
    cout<< "Jugador "<< nom[i] << " Apostaste--> " << ap[i] << endl;
}
	system("Pause");
	system("cls");
}			//Apuesta
 
//***********
 
void cartas(){ //Llena mi baraja
	int v;
	for(int i=0; i<4; i++){
		v=1;
		for(int j=0; j<13; j++){
				if(v>=11){
				v=10;
				}
			barajas[4][13]=v;
			v++;
			}
 
		}
}
 
int repcartas(){
 
	int tipoDeCarta = rand() % 4;
	int carta = rand() % 13;
	string mensajeCarta = "";
	switch(tipoDeCarta) {
    	case 0: mensajeCarta = "de rombos";
    	    break;
    	case 1: mensajeCarta = "de corazones";
    	    break;
    	case 2: mensajeCarta = "de espadas";
     	   break;
   	 case 3: mensajeCarta = "de treboles";
    	    break;
    	default: //error
		break;
}
	int tipoCarta = 0;
	int cartaN = 0;
	do {
		tipoCarta = rand() % 4;
		cartaN = rand() % 13;
	} while(barajas[tipoCarta][cartaN] == 0);
	return barajas[tipoCarta][cartaN];
}