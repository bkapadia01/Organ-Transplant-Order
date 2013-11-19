#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "Register.hpp"
#include "patient.hpp"
using namespace std;

int main()
{
Register Registerobj;
int input;
while (1){

cout << "Emergency Ward Register" <<endl;
cout<< "========================================================================"<<endl;
cout << "Please Input A Selection In To The Window:\n"<<endl;

cout <<"Select 1:\t\t"<< "To enter a patient with *Unknown* conditions."<<endl;
cout <<"Select 2:\t\t"<< "To enter a *Critical* patient." <<endl;
cout <<"Select 3:\t\t"<< "To process the first patient in queue." <<endl;
cout <<"Select 4:\t\t"<< "To view all patients in the register"<<endl;
cout << "==========================================================================="<<endl;

cout <<"Please select input between 1-4:" ;
cin>>input;

switch (input){

case 1:
Registerobj.addptatEnd();

break;

case 2:
Registerobj.addptatFront();
break;

case 3:
Registerobj.proccess();
	break;
break;

case 4:
Registerobj.display();
break;



default:
    cout<<"The selection is incorrect please enter between 1-4!"<<endl;


return 1;
}
}
}
