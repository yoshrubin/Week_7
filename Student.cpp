#include "Student.h"

Student::Student(){
    id = 0;
    firstName = "";
    lastName = "";
    numCourses = 0;
}

bool BA::milga(){
          int gradeSum;
          vector<int> temp = grades;
          while (!temp.empty()){
              gradeSum += temp.pop_back();
          }
          if (((gradeSum/numCourses))>= 95) && numCourses >= 10){
              return true;
          }
          return false;
}

void BA::print(){
          vector<int> temp = grades;
          cout << "ID: " << id << endl;
          << "first name: " << firstName << endl
          << "last name: " << lastName << endl
          << "num courses: " << numCourses << endl
          << "grades: " << while (!temp.empty()){ cout << temp.pop_back()}
}
