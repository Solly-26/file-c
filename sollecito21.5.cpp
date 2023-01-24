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
void  media(double a,double b)
{
double m;
double m2;
m=(a+b)/2;
m2=m+10;
cout<<"la media dei due voti e\': "<<m2;

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
