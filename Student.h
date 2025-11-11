#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

//#write Person class here
 class  Person{

private:
  string name;
  int id;
public :
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
