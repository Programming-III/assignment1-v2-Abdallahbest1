#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here


class Instructor: public Person{

public :
  string departement;
  int experienceYears;
  void display();
  
  Instructor(string n , int i, string d , int ey){
         super(name,id);
         departement = d;
         experienceYears = ey;
   }
   void display(){
         cout << Instructor.name<<" "<<Instructor.id<<" "<<Instructor.departement<<" "<<Instructor.experienceYears<<endl;
      }
   }
};









#endif
