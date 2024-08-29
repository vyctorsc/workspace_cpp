//SENTENCIA SWITCH
#include<iostream>

using namespace std;

int main(){
	int opcion;
	
	cout<<"Digite una opcion entre 1 & 4: ";
	cin>>opcion;
	
	switch(opcion){
		case 1: cout<<"Seleccionaste la opcion #1";
		break;
		case 2: cout<<"Seleccionaste la opcion #2";
		break;
		case 3: cout<<"Seleccionaste la opcion #3";
		break;
		case 4: cout<<"Seleccionaste la opcion #4";
		break;
		
		default: cout<<"NO esta en el rango de 1 & 4";
		break;
		
	}
}
