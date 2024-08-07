#include<iostream>

using namespace std;

int main(){
	int x,y,aux;
	
	cout<<"Digite el valor de x: "; cin>>x;
	cout<<"Digite el valor de y: "; cin>>y;
	
	aux = x;
	x = y;
	y = aux;
	
	cout<<"Los valores fueron intercambiados"<<endl;
	
	cout<<"X antes era "<<aux<<" ahora es: "<<x<<endl;
	cout<<"Y antes era "<<x<<" ahora es: "<<y<<endl;
	
}
