#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
using namespace std;
//#write student class here

class Student:public Person{


public:
  int yearLevel;
  string major;

  Student(string n , int i, int yl , string m ){
      super(name , id);
      yearLevel = yl;
      major =m;
   }
   void display(){
      cout << Student.name<<" "<<Student.id<<" "<<Student.yearLevel<<" "<<Student.major<<endl;
   }

};











#endif
