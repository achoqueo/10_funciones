//menu
//Alexandra Valeria Choque Onofre
#include<iostream>
using namespace std;

void depositar(float);
void retirar(float);
void mostrarSaldo();

float saldo = 0; //variable global

int main(){
	int op;
	float valor;
	do{
	  cout<<"Cajero automatico"<<endl;
	  cout<<"1. Depositar."<<endl;
	  cout<<"2. Retirar."<<endl;
	  cout<<"3. Mostrar saldo."<<endl;
	  cout<<"0. Salir."<<endl;
	  cout<<"Elija una opcion: ";cin>>op;
	  switch(op){
		 case 1:
			 cout<<"Ingrese el monto a depositar: ";cin>>valor;
			 depositar(valor);
			 break;
		 case 0:
			 cout<<"Saliendo... "<<endl;
			 system("pause");
		     break;
		 default:
			 cout<<"opcion invalida."<<endl;
			 system("pause");
		     break;
		     
		}
	 } while(op!=0);
	 
	    return 0;
	
}
void depositar(float monto){
	saldo = saldo + monto;
}
void retirar(float monto){
	saldo = saldo - monto;
}
void mostrarSaldo(){
	cout<<"El saldo actual es: "<<saldo<<endl;
}