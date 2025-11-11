#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================

class Person{
   Person(string n , int id){
      name = n;
      this.id = id; 
   }

   void display(){
      cout<< Person.name << " "<<Person.id<<endl;
      
   }

}






// ==================== Student Class Implementation ====================


class Student{
   Student(string n , int i, int yl , string m ){
      super(name , id);
      yearLevel = yl;
      major =m;
   }
   void display(){
      cout << Student.name<<" "<<Student.id<<" "<<Student.yearLevel<<" "<<Student.major<<endl;
   }
}



// ==================== Instructor Class Implementation ====================
class Instructor{

   Instructor(string n , int i, string d , int ey){
         super(name,id);
         departement = d;
         experienceYears = ey;
   }
   void display(){
         cout << Instructor.name<<" "<<Instructor.id<<" "<<Instructor.departement<<" "<<Instructor.experienceYears<<endl;
      }
   }







// ==================== Course Class Implementation ====================

class Course{
   Course(string cc,string cn,int ms, Student* s , int cs){
         courseCode = cc;
         courseName = cn;
         maxStudents = ms;
         currentStudents = cs;
   }
   Student addStudent(const Student& s){
      currentStudents++;
      return currentStudents;
   }
void displayCourseInfo(){
        cout <<Course.courseCode<< Course.name<<" "<<Course.maxStudents<<" "<<Course.students<<" "<<Course.currentStudents<<endl;
      Student::display();

   }
}






// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
