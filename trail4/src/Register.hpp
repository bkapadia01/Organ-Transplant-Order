#include <iostream>
#include <string.h>
#include <stdlib.h>
#ifndef REGISTER_H
#define REGISTER_H
#include "patient.hpp"

using namespace std;
//this is the register class and is required for the objects required in creating the diffrent funtion for the register class ie. add patient,
//add critical patient, display and process the patients
class Register
{
int i;

//is the private pointer for the patient class
private:
Patients *Pts;
//stores the objects for the patient class in public
public:
    int maxPT;
    Register();
    Register(int);
    void addptatEnd ();
    void addptatFront();
    void display();
    void proccess();

};

#endif // REGISTER_H
