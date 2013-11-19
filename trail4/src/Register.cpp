#include "Register.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include "patient.hpp"
using namespace std;
//constructs the register class
//asks user for maxpatient to allcoate the memory
Register::Register()
{
	i =0;
	int maxNumber;

	cout << "Welcome to the Emergency ward register to begin:" <<endl;
	cout << "Please enter the maximum number of patients allowed in the hospital:\n";
	cin >> maxNumber;
	Pts = new (nothrow) Patients[maxNumber] ;
	maxPT =	maxNumber ;
}
//this class adds the properites of new patient in the funciton class and displays the properites
void Register::addptatEnd(){

if(maxPT==0){
cout<<"Can not add any more pateints please select Process or Display instead"<<endl;
}
if (maxPT>0){
cout << "Please enter first name of the patient:";
cin >> Pts[i].firstName;

cout << "Please enter last name of the patient:";
cin >> Pts[i].lastName;

cout << "Please enter the SIN number of the patient :";
cin >> Pts[i].sin_number;

cout<< "The Patient:"<<Pts[i].firstName<<" "<<Pts[i].lastName<< " with the SIN#:"<<Pts[i].sin_number<<" has been added to the register"<<endl;
i++;
maxPT--;
}

}
//this class adds critially ill patients to front of the line and displays the info of the critical patient

void Register::addptatFront(){
	Patients temp;

	if(maxPT==0){
	cout<<"------Can not add any more pateints please select Process or Display instead!-----\n\n"<<endl;
	}

	if(maxPT >0){
cout<< "Enter first name:";
cin >> temp.firstName;

cout<< "Enter last name:";
cin >> temp.lastName;

cout<< "Enter social insurance:";
cin >> temp.sin_number;

cout<< "The Critical Patient: "<< temp.firstName<<" "<< temp.lastName<< " with the SIN#: "<<temp.sin_number<<" \n"<<endl;

int j;
//Pts[0]=temp;
for(j=i-1; j>=0; j--)
{

	Pts[j+1]= Pts[j];
}

Pts[0]=temp;
	}
i++;
maxPT--;
}

//this class displays the list of registers and patients all present in the queue
void Register::display(){

cout << "First Name\t\t" <<"Last Name\t\t" <<"Social Number" <<endl;
cout<<"-------------------------------------------------------------\n"<<endl;
int j;

for(j=0; j<i; j++){
	cout << Pts[j].firstName; cout << "\t\t\t"<< Pts[j].lastName<< "\t\t\t" << Pts[j].sin_number << endl;
}

}
//this class allows the first patient to be operated/teseted/removed
void Register::proccess(){

int choice;
int f;
Patients temp;
//this is the switch case menu for the random selection of the procces
choice = rand()% 3;
//if 0 is randomly tested on
switch (choice){
	case 0:
cout<<"The patient being processed is being *TESTED ON* and will return to the end of queue\n"<<endl;
		temp=Pts[0];
		for(f=1; f<i; f++){
			Pts[f-1]= Pts[f];
		Pts[f]=temp;

		}

		break;
//if 1, randomly operated on
	case 1:
		cout<<"The patient being processed is being *OPERATED ON* and will return to the end of queue\n"<<endl;
		temp=Pts[0];
				for(f=1; f<i; f++){
					Pts[f-1]= Pts[f];
				Pts[f]=temp;

				}

		break;
//the pt is randomly removed
	case 2:
		cout<<"The first patient in the line has been Removed!"<<endl;
		for(f=1; f<i; f++){
				Pts[f-1]= Pts[f];
			Pts[f]=temp;

		}
i=i-1;//removes the array element that was removed
maxPT++;
		break;
}
};





