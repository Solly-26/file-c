/*
	Name: media con funzione
	Copyright: 
	Author: Gabriele Sollecito
	Date: 24/01/23 14:23
	Description: 
*/
//1.includo le librerie
#include <iostream>
using namespace std;
//2. dichiaro la funzione
double media(double a,double b)
{
	
double m;
m=(a+b)/2;
m += 10;
return m;

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
double tot = media(a,b);

cout<<tot;
//4. ritorno al sistema operativo
return 0;
//5. fine del programma
}
