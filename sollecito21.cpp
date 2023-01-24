/*
	Name: media con funzione
	Copyright: 
	Author: Gabriele Sollecito
	Date: 24/01/23 14:06
	Description: 
*/
//1.includo le librerie
#include <iostream>
using namespace std;
//2. dichiaro la funzione
void  media(double a,double b)
{
double m;
m=(a+b)/2;
cout<<"la media dei due voti e\': "<<m;
}
//3. inizio il blocco main
int main()
{
double a;
double b;
double m;

cout<<"inserire il primo voto: ";
cin>>a;
cout<<"inserire il secondo voto: ";
cin>>b;
media(a,b);
//4. ritorno al sistema operativo
return 0;
//5. fine del programma
}
