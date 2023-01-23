/*
	Name: 
	Copyright: 
	Author: 
	Date: 30/09/22 12:24
	Description: 
*/

//1. includo le librerie
#include <iostream>
#include <cstring>
//2. inizio il blocco main
using namespace std;
int main()
{
//3. dichiaro e inizializzo le variabili	
int lung=0;
char parola[]="";
//4.input
cout<<"inserisci la parola"<<endl;
cin>>parola;
//5. logica-operazioni-algoritmo e output
lung=strlen(parola);
if(lung>15)
{
cout<<"la stringa e\' lunga";
}
else
{
if(lung<=15 && lung>=7)
{
cout<<"la stringa e\'' di media lunghezza";
}
else
{
cout<<"la stringa e\' corta";
}
}
//6. fine del programma
return 0;
}
