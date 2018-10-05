#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int main(){
	double TB,BBI;
	cout<<"Masukkan tinggi badan anda : ";
	cin>>TB;
	
	BBI = (TB - 100) - ((TB - 100) * 0.1);
	
	cout<<"BBI : "<<BBI<<endl;
	
	getch(); 
}
