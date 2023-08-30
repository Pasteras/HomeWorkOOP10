#include <iostream>
#include "Airplane.h"

using namespace std;

int main()
{
	Airplane plane1("Airbus A 380", 235, 650);
	Airplane plane2("Boeing 737", 165, 430);
	
	cout << "Plane 1:" << endl;
	cout << "Name: " << plane1.Get_type() << endl;
	cout << "Passanger: " << plane1.Get_pass() << endl;

	cout << "Passanger +: ";
	plane1++;
	cout << plane1.Get_pass() << endl;
	cout << "Passanger -: ";
	plane1--;
	plane1--;
	cout << plane1.Get_pass() << endl;

	cout << "Max passanger: " << plane1.Get_pass_max() << endl << endl;

	cout << "Plane 2:" << endl;
	cout << "Name: " << plane2.Get_type() << endl;
	cout << "Passanger: " << plane2.Get_pass() << endl;
	cout << "Passanger +: ";
	plane2++;
	cout << plane2.Get_pass() << endl;
	cout << "Passanger -: ";
	plane2--;
	plane2--;
	cout << plane2.Get_pass() << endl;

	cout << "Max passanger: " << plane2.Get_pass_max() << endl << endl;

	if (plane1.Get_type() == plane2.Get_type() &&
		plane1.Get_pass_max() == plane2.Get_pass_max())
	{
		cout << "The planes are the same." << endl;
	}
	else
	{cout << "Planes are not the same." << endl;}

	if (plane1.Get_pass_max() > plane2.Get_pass_max())
	{
		cout << plane1.Get_type() << " Holds more passengers." << endl;
	}
	else 
	{
		cout << plane2.Get_type() << " Holds more passengers." << endl;
	}
}
