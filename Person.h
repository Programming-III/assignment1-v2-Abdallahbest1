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
Person(string n , int id){
      name = n;
      this.id = id; 
   }
 void display(){
      cout<< Person.name << " "<<Person.id<<endl;
      
   }

};







#endif
