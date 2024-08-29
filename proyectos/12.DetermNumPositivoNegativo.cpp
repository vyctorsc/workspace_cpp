//Determinar si un numero es negativo o positivo

#include<iostream>

using namespace std;

int main(){
	int num;
	
	cout<<"Digite un numero: ";
	cin>>num;
	
	if (num > 0){
		cout<<"El numero es positivo ;)";
	}else{
		cout<<"El numero es negativo :(";
	}
	return 0;
}
