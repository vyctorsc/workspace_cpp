//Determinar si edad esta en el rango de 18 - 25

#include<iostream>

using namespace std;

int main(){
	int edad;
	
	cout<<"Digite su edad: ";
	cin>>edad;
	
	if(edad >= 18 and edad <= 25){
		cout<<"Tu edad esta dentro del rango requerido [18 - 25]";
	}else{
		cout<<"Lo siento, su edad esta fuera del rango - NO aplica";
	}
	return 0;
}
