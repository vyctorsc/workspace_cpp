#include<iostream>

using namespace std;

int main(){
	float n1 = 0,n2=0,n3=0, n_final=0;
	string student;
	
	cout<<">>>Calificaciones Finales<<<"<<endl;
	
	cout<<"\nIngrese nombre del estudiante: ";
	cin>>student;	
	cout<<"\nDigite la nota de Practicas: "<<endl;
	cin>>n1;
	cout<<"Digite la nota de Teoria: "<<endl;
	cin>>n2;
	cout<<"Digite la nota de participacion: "<<endl;
	cin>>n3;
	
	n1 = n1 * 0.30;
	n2 = n2 * 0.60;
	n3 = n3 * 0.10;
	
	n_final = (n1 + n2 + n3)/3;
	
	cout<<"La nota Final del estudiante "<<student<<" es: "<<n_final;
	
	return 0;
}
