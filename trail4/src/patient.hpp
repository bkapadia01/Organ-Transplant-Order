#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "Register.hpp"
using namespace std;

//his is the header file for patient classs
#ifndef PATIENTS_H
#define PATIENTS_H


class Patients{

public:
	  string firstName ,lastName;
	  string sin_number;

	  Patients();
	  	  	  	  //constructor for the patient class
      Patients(string, string, int);
};

#endif // PATIENTS_HPP
