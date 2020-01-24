#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;
double Interest(double x,double y){
	double z;
	z=x*(y/100);
	return z;
}
int main(){	
	double m,i,p;
	cout<<"Enter initial loan: ";
	cin>>m;
	cout<<"Enter interest rate per year (%): ";
	cin>>i;
	cout<<"Enter amount you can pay per year: ";
	cin>>p;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	cout << fixed << setprecision(2);

	double PrevB=m,Newb=m;
	
	for(int k=1;k<=100;k++){
		double z= PrevB=Newb;
		if(PrevB>p){
			cout << fixed << setprecision(2); 
			cout << setw(13) << left << k;
			
			cout << setw(13) << left << z;
			cout << setw(13) << left << Interest(PrevB,i);
			double Total=PrevB+Interest(PrevB,i);
			cout << setw(13) << left << Total;
			cout << setw(13) << left << p;
			Newb=Total-p;
			cout << setw(13) << left << Newb;
			cout << "\n" ;
		} else{
			cout << fixed << setprecision(2); 
			cout << setw(13) << left << k;
			double z= PrevB=Newb;
			cout << setw(13) << left << z;
			cout << setw(13) << left << Interest(PrevB,i);
			double Total=PrevB+Interest(PrevB,i);
			cout << setw(13) << left << Total;
			double e=p=Total;
			cout << setw(13) << left << e;
			Newb=Total-Total;
			cout << setw(13) << left << Newb;
			cout << "\n";
			break; 
		} 
	
	
	}
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	
	return 0;
}
