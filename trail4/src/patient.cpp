#include "Register.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include "patient.hpp"
using namespace std;
//this is the patients class and has the objects for the patient proprerites ie. first name, last name. sin number
Patients::Patients()
{
	//sin_number=0;
}

Patients::Patients(string fname, string lname, int sin){
	firstName=fname;
	lastName=lname;
	sin_number=sin;
}

