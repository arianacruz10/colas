#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct nodo{
	int valor;
	nodo *sig;
};

void agregarCola(nodo *&,nodo *&, int);
bool colavacia(nodo *);

int main (){
	nodo *inicio= NULL;
	nodo *fin= NULL;
	
	int valor;
	
	cout<<"Digite un numero: ";
	cin>>valor;
	agregarCola(inicio,fin,valor);
	
	getch();
	return 0;
}

void agregarCola(nodo *&inicio,nodo *&fin,int n){
	nodo *nuevonodo=new nodo();
	
	nuevonodo->valor=n;
	nuevonodo->sig= NULL;
	
	if(colavacia(inicio)){
		inicio=nuevonodo;	
	}
	else{
		fin->sig=nuevonodo;
	}
	fin=nuevonodo;
	cout<<"Elemento"<<n<<"se ha agregado a la cola ";
}

bool colavacia(nodo *inicio){
	return (inicio==NULL)?  true : false;

	if (inicio==NULL){
		return true;
	}
	else{
		return false;
		
	}
}
