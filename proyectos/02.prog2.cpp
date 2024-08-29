/*
	Escribe un programa que lea de la entrada estadar rl precio
	de un producto y muestre en la salida estandar el precio del
	producto al aplicarle el IVA.
*/
#include<iostream>

using namespace std;

int main(){
	system("color 01");
	const float IVA = 0.19;
	float precio_produc, total_precio = 0, aplicar_iva = 0;
	
	cout<<"Ingrese el precio del producto: "<<endl;
	cin>>precio_produc;
	
	aplicar_iva = precio_produc * IVA;
	total_precio = precio_produc - aplicar_iva;
	
	cout<<"El precio final del producto, aplicandole el desc del 19% es: "<<total_precio<<endl;
	
	return 0;
}
