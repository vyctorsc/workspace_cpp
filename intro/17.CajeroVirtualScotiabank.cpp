/*
	Hacer un programa que simule un cajero automatico con un 
	saldo inicial de 1000 Dollars.
*/
#include<iostream>

using namespace std;

int main(){
	int saldo_inicial = 1000,opc,deposito,nuevoSaldo,retirar;
	
	cout<<"\t\tBienvenido a su Cajero ScotiaBank"<<endl;
	cout<<"1. Ingresar Dinero en cuenta"<<endl;
	cout<<"2. Retirar Dinero de la cuenta"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Seleccionar una Opcion: "<<endl;
	cin>>opc;
	
	switch(opc){
		
		case 1: cout<<">>>Escogio Ingresar Dinero<<<"<<endl;
				cout<<"Ingresar cantidad: ";
				cin>>deposito;
				
				nuevoSaldo = saldo_inicial + deposito;
				
				cout<<"Su nuevo saldo es: "<<nuevoSaldo;
		break;
				
		case 2:	cout<<">>>Escogio Retirar Dinero<<<"<<endl;
				cout<<"Ingrese la cantidad a Retirar: ";
				cin>>retirar;
				
				if(retirar > saldo_inicial){
					cout<<"Saldo Insuficiente"<<endl;
				}else{
					saldo_inicial -= retirar;
					cout<<">>>Retiro Exitoso<<<"<<endl;
				}
		break;
		default: cout<<"Gracias Por usar nuestros Cajeros";
				 cout<<"Vuelva Pronto - ScotiaBank";
	}
	return 0;
}
