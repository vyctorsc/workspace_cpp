
#include<iostream>

using namespace std;

int main(){
	float n1,n2,n3,n4,notaFinal;
	
	cout<<"\nDigite la nota final del alumno #1: ";cin>>n1;
	cout<<"\nDigite la nota final del alumno #2: ";cin>>n2;
	cout<<"\nDigite la nota final del alumno #3: ";cin>>n3;
	cout<<"\nDigite la nota final del alumno #4: ";cin>>n4;
	
	notaFinal = (n1+n2+n3+n4)/4;
	
	cout<<"La media o el promedio entre los 4 alumno es: "<<notaFinal<<endl;
	return 0;
}
