#pragma once
#include <iostream>

using namespace std;

class Airplane
{
private:
	string type_plane;
	int passenger;
	int max_passenger;
public:
	//initializations.
	Airplane();
	Airplane(string type_plane, 
	int passenger, int max_passenger);
	//set.
	void Set_type(string type_plane);
	void Set_pass(int passenger);
	void Set_pass_max(int max_passenger);
	//get.
	string Get_type();
	int Get_pass();
	int Get_pass_max();
	//over
	friend bool operator== (Airplane& plane1, Airplane& plane2);
	friend bool operator!= (Airplane& plane1, Airplane& plane2);
	friend bool operator>(Airplane& plane1, Airplane& plane2);
	Airplane operator++(int);
	Airplane operator--(int);
	
};

