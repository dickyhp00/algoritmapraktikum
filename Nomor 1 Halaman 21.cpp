#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main ()
{
	double meter,yard,kaki,inchi;
	cout<<"Masukkan satuan meter : ";
	cin>>meter;
	
	yard = (meter/1.0936);
	kaki = (meter/3.2808);
	inchi = (meter/39.3701);
	
		cout<<" Yard : "<<yard<<endl;
		cout<<" Kaki : "<<kaki<<endl;
		cout<<" Inchi : "<<inchi<<endl;
		
	getch();
}
