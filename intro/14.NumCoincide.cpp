/*
	Determinar si tres numeros ingresados coincide con un 
	cuatro numero ingresado.
	
*/
#include<iostream>

using namespace std;

int main(){
	int num1,num2,num3,num4;
	
	cout<<"Digite un numero: ";
	cin>>num1;
	cout<<"Digite otro numero: ";
	cin>>num2;
	cout<<"Digite un tercer numero: ";
	cin>>num3;
	
	cout<<">>>-----------------//-----------------<<<"<<endl;
	
	cout<<"Digite un cuarto numero: ";
	cin>>num4;
	
	
	if((num4 == num1) || (num4 == num2) || (num4 == num3)){
		cout<<"El cuatro numero digitado coincide con los ingresados";
	}else{
		cout<<"El cuarto numero digitado NO coincide con ninguno";
	}
}
