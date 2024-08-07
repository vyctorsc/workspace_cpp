//LEER TRES NUMEROS Y DETERMINAR CUAL ES EL MAYOR

#include<iostream>

using namespace std;

int main(){
	int num1,num2,num3;
	
	cout<<"Digite Tres numeros: "; cin>>num1>>num2>>num3;
	
	if((num1 > num2) and (num1 > num3)){
		
		cout<<"EL numero "<<num1<<" es el MAYOR de los Tres";
	
	}else if((num2 > num1) and (num2 > num3)){
		cout<<"EL numero "<<num2<<" es el MAYOR de los Tres";
		
	}else if((num3 > num1) and (num3 > num2)){
		cout<<"EL numero "<<num3<<" es el MAYOR de los Tres";
		
	}else {
		cout<<"Todos los numeros son Iguales";
	}
	return 0;
}
