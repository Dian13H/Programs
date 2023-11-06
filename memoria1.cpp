#include <iostream>
using namespace std;
int main (){
	int var=5;
	int* pointVar;
	//declarar variable puntero
	pointVar=&var;
	//almacenar direccion de var
	cout<<"var = "<<var<<endl;
	//imprimir valor de var
	cout<<"Direccion de la variable var (&var) = "<<&var<<endl<<endl;
	//imprimir direccion de var
	cout<<"Apuntador pointVar = "<<pointVar<<endl<<endl;
	//imprimir el apuntador pointVar
	cout<<"Cambia el valor de var a 7:"<<endl;
	var=7;
	//cambiar el valor de var a 7
	cout<<"var = "<<var<<endl<<endl;
	cout<<"*pointVar = "<<*pointVar<<endl<<endl;
	cout<<"Cambia el valor de *pointVar a 16:"<<endl;
	*pointVar=16;
	//cambiar el valor de pointVar a 16
	cout<<"var = "<<var<<endl<<endl;
	cout<<"Apuntador pointVar = "<<pointVar<<endl;
	//imprimir el contenido del apuntador
	cout<<"*pointVar = "<<*pointVar<<endl;
	cout<<"var = "<<var<<endl;
	return 0;
}
