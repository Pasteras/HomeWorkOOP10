#include "Airplane.h"

//initializations.
Airplane::Airplane(){};
Airplane::Airplane(string type_plane,
	int passenger, int max_passenger)
{
	this->type_plane = type_plane;
	this->passenger = passenger;
	this->max_passenger = max_passenger;
}

//set.
void Airplane::Set_type(string type_plane)
{
	this->type_plane = type_plane;
}
void Airplane::Set_pass(int passenger)
{
	this->passenger = passenger;
}
void Airplane::Set_pass_max(int max_passenger)
{
	this->max_passenger = max_passenger;
}
//get.
string Airplane::Get_type()
{
	return type_plane;
}
int Airplane::Get_pass()
{
	return passenger;
}
int Airplane::Get_pass_max()
{
	return max_passenger;
}
//over.
bool operator== (Airplane& plane1, Airplane& plane2)
{
	return (plane1.Get_type() == plane2.Get_type() &&
		plane1.Get_pass_max() == plane2.Get_pass_max());
}
bool operator!= (Airplane& plane1, Airplane& plane2)
{ 
	return !(plane1 == plane2); 
};
bool operator>(Airplane plane1, Airplane& plane2)
{
	return plane1.Get_pass_max() > plane2.Get_pass_max();
}
Airplane Airplane::operator++(int)
{
	passenger++;
	return *this;
}
Airplane Airplane::operator--(int)
{
	passenger--;
	return *this;
}
