#include <iostream>
#include <string>
#include <cmath>
#include <cstring> //biblioteca para manipular strings tipo arreglo de char

using namespace std;
// funcion secundaria
double sumar(double n1, double n2){
	return n1+n2;
}

void saludarPersona(string nombre){
	cout<<"Hola "<<nombre<<endl;
}

double obtenerPI(){
	return M_PI;
}

void saludar(){
	cout<<"Hola mundo";
}

//---------------------------------------------------------------

void forma1()	{
	char palabra[] = "Hola";
	cout << "Longitud de la palabra: " <<strlen(palabra) << endl;
}

void forma2()	{
	string palabra = "Hola mundo";
	cout << "Longitud de la palabra: " << palabra.length() << endl;
}

void deletrear()	{
	string palabra = "Hola mundo";
		
	cout << "Deletreando la palabra \"" << palabra << "\":" << endl;
	
	for (size_t i = 0 ; i< palabra.length(); ++i) {
		cout << palabra[i] << endl;
	}
}



	string validarCorreo(string correo){
		int arroba=0;
		for (size_t i = 0 ; i< correo.length(); ++i) {
			if(correo[i]== '@' ){
				arroba++;
			}
		}
		if(arroba==1){
			return "Correo valido";
		}else{
			return "Correo mal ingresado";
		}

}




//__________________________________________________________________________________________________________________________________________________________________

int main(){
//	double r=sumar(4.5, 5.1);
//	cout<<"resultado: "<<r;

//saludarPersona("Pedro");



//saludar();
//------------------------------------------------

//forma1();
//forma2();

//deletrear();


string correo;
cout<<"Ingrese un correo"<<endl;
cin>>correo;
cout<<validarCorreo(correo)<<endl;



	return 0;
}







































































