#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int ladoA,ladoB, hipotenusa;
	
	cout<<"Teorema de Pitagoras - Hallando la Hipotenusa"<<endl;
	
	cout<<"\nDigite el valor del lado A: ";
	cin>>ladoA;
	cout<<"Digite el valor del lado B: ";
	cin>>ladoB;
	
	hipotenusa = pow(ladoA,2) + pow(ladoB,2);
	
	cout<<"La Hipotenusa del Triangulo es: "<<hipotenusa;
}
