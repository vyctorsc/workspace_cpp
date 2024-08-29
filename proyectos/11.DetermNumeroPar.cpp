//Determinar numero Par e Impar

#include<iostream>

using namespace std;

int main(){
	int num;
	
	cout<<"Digite un numero: ";
	cin>>num;
	
	if(num%2 == 0){
		cout<<"El numero es PAR";
	}else{
		cout<<"El numero es IMPAR";
	}
	return 0;
}
