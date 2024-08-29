//DETERMINAR CUAL DE LOS DOS NUMROS INGRESADOS ES EL MAYOR

#include<iostream>

using namespace std;

int main(){
	int num1, num2;
	
	cout<<"Digite un numero: ";
	cin>>num1;
	cout<<"Digite otro numero: ";
	cin>>num2;
	
	if (num1 > num2){
		
		cout<<"El numero "<<num1<<" es el numero MAYOR";
		
	}else if(num2 > num1) {
		
		cout<<"El numero "<<num2<<" es el numero MAYOR";
		
	} else {
		cout<<"Numeros Iguales";
	}
}
