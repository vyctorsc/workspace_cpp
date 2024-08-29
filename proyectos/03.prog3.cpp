#include<iostream>

using namespace std;

int main(){
	int edad;
	char sexo[10];
	float altura;
	string nombre;
	
	cout<<"Cual es su nombre?: "<<endl;
	cin>>nombre;
	cout<<"Cual es tu edad?: "<<endl;
	cin>>edad;
	cout<<"Cual es tu altura?: "<<endl;
	cin>>altura;
	cout<<"Cual es tu genero?: "<<endl;
	cin>>sexo;
	
	cout<<"Hola "<<nombre<<" Bienvenido a C++"<<endl;
	cout<<"Tu edad es: "<<edad<<endl;
	cout<<"Tu altura es: "<<altura<<endl;
	cout<<"Tu Sexo es: "<<sexo<<endl;
	
	system("pause");
	return 0;
}
