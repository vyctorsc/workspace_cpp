#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int opcion, cubo, num;
	
	cout<<"\nBienvenido al Menu de Operaciones Matematicas"<<endl;
	cout<<"1.Hallar el Cubo de un numero."<<endl;
	cout<<"2.Numero Par o Impar"<<endl;
	cout<<"3.Salir."<<endl;
	cin>>opcion;
	
	switch(opcion){
		case 1: cout<<"Digite un numero: ";
				cin>>num;
				
				cubo = pow(num,3);
				cout<<"El cubo del numero digitado es: "<<cubo<<endl;break;
		case 2: cout<<"Digite un numero: ";
				cin>>num;
				
				if(num%2 == 0){
					cout<<"El numero Digitado es PAR ;).";
				}else{
					cout<<"El numero Digitado es IMPAR :(";
				}
				break;
		case 3: cout<<"Gracias Por usar nuestro programa";break;
		
		default: cout<<"Dato Ingresado no valido";break;
				
		
	}
}
